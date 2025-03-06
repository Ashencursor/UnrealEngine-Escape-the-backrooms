#include "item.h"
#include "../../config/config.h"
#include "../Cheat.h"
#include "../../dependencies/imgui/imgui.h"

std::vector<SDK::ADroppedItem*>& GetAllDefaultDroppedItems()
{
    static std::vector<SDK::ADroppedItem*> AllDefaultDroppedItems;
    if (AllDefaultDroppedItems.empty())
    {
        for (int i = 0; i < SDK::UObject::GObjects->Num(); i++)
        {
            SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);
            if (!Obj)
            {
                continue;
            }

            if (Obj->IsDefaultObject() && Obj->IsA(SDK::ADroppedItem::StaticClass()))
            {
                AllDefaultDroppedItems.push_back((SDK::ADroppedItem*)Obj);
            }
        }
    }             

    return AllDefaultDroppedItems;
}


void UpdateDroppedItemsCache()
{
    Game::dropped_items.clear();

    UC::TArray<SDK::AActor*> Actors;
    SDK::UGameplayStatics::GetAllActorsOfClass(SDK::UWorld::GetWorld(), SDK::ADroppedItem::StaticClass(), &Actors);

    for (int i = 0; i < Actors.Num(); i++)
    {
        SDK::ADroppedItem* DroppedItem = (SDK::ADroppedItem*)Actors[i];

        Game::DroppedItem CacheEntry = {};
        CacheEntry.name = DroppedItem->ID.ToString();
        CacheEntry.pos = (DroppedItem->ItemMesh ? DroppedItem->ItemMesh->K2_GetComponentLocation() : SDK::FVector());
        CacheEntry.obj = DroppedItem;
        Game::dropped_items.push_back(CacheEntry);
    }
}

void UpdateAllItemsCache()
{
    if (!Game::all_items.empty())
    {
        return;
    }

    std::vector<SDK::ADroppedItem*> DroppedItemTypes = GetAllDefaultDroppedItems();
    for (const auto& DIType : DroppedItemTypes)
    {
        if (!DIType->ID.GetDisplayIndex())
        {
            continue;
        }

        Game::Item CacheEntry = {};
        CacheEntry.name = DIType->ID.ToString();
        CacheEntry.obj = DIType;

        Game::all_items.push_back(CacheEntry);
    }
}

/*v
void logAllActors(SDK::UWorld* World) {
    if (!World || !World->PersistentLevel) {
        std::cout << "Invalid World or PersistentLevel" << std::endl;
        return;
    }

    auto& Actors = World->PersistentLevel->Actors; // Directly access the Actors array or list
    std::vector<std::pair<std::string, std::string>> actors;

    for (int i = 0; i < Actors.Num(); ++i) { 
        SDK::AActor* Actor = Actors[i];     
        if (Actor) {
            std::string actorName = Actor->GetName();
            std::string className = Actor->Class->GetName();
            actors.push_back({ actorName, className });
        }
    }

    for (const auto& pair : actors) {
        std::cout << "Actor: " << pair.first << ", Class: " << pair.second << std::endl;
    }
}
*/


void Draw3DBox(SDK::FVector& center, SDK::FVector& Bounds, SDK::APlayerController* Controller, bool outline = true)
{
    const float wX = (center.X + Bounds.X) - (center.X - Bounds.X);
    const float wY = (center.Y + Bounds.Y) - (center.Y - Bounds.Y);

    SDK::FVector Top{ center.X, center.Y, center.Z + Bounds.Z };
    SDK::FVector Bottom{ center.X, center.Y, center.Z - Bounds.Z };

    SDK::FVector a1 = { center.X - wX / 2, center.Y + wY / 2, Bottom.Z };
    SDK::FVector a2 = { center.X + wX / 2, center.Y + wY / 2, Bottom.Z };
    SDK::FVector a3 = { center.X - wX / 2, center.Y - wY / 2, Bottom.Z };
    SDK::FVector a4 = { center.X + wX / 2, center.Y - wY / 2, Bottom.Z };

    SDK::FVector b1 = { center.X - wX / 2, center.Y + wY / 2, Top.Z };
    SDK::FVector b2 = { center.X + wX / 2, center.Y + wY / 2, Top.Z };
    SDK::FVector b3 = { center.X - wX / 2, center.Y - wY / 2, Top.Z };
    SDK::FVector b4 = { center.X + wX / 2, center.Y - wY / 2, Top.Z };

    SDK::FVector2D a1w2s{};
    SDK::FVector2D a2w2s{};
    SDK::FVector2D a3w2s{};
    SDK::FVector2D a4w2s{};

    SDK::FVector2D b1w2s{};
    SDK::FVector2D b2w2s{};
    SDK::FVector2D b3w2s{};
    SDK::FVector2D b4w2s{};

    auto drawLine = [](const SDK::FVector2D& start, const SDK::FVector2D& end) {
        ImGui::GetBackgroundDrawList()->AddLine(
            ImVec2(start.X, start.Y),
            ImVec2(end.X, end.Y),
            IM_COL32(255, 0, 0, 255), // Red color, fully opaque
            1.0f                      // Line thickness
        );
        };
    if (Controller->ProjectWorldLocationToScreen(a1, &a1w2s, false) && Controller->ProjectWorldLocationToScreen(a2, &a2w2s, false)
        && Controller->ProjectWorldLocationToScreen(a3, &a3w2s, false) && Controller->ProjectWorldLocationToScreen(a4, &a4w2s, false)
        && Controller->ProjectWorldLocationToScreen(b1, &b1w2s, false) && Controller->ProjectWorldLocationToScreen(b2, &b2w2s, false)
        && Controller->ProjectWorldLocationToScreen(b3, &b3w2s, false) && Controller->ProjectWorldLocationToScreen(b4, &b4w2s, false))
    {
        drawLine(a1w2s, a2w2s);
        drawLine(a2w2s, a4w2s);
        drawLine(a4w2s, a3w2s);
        drawLine(a3w2s, a1w2s);

        drawLine(b1w2s, b2w2s);
        drawLine(b2w2s, b4w2s);
        drawLine(b4w2s, b3w2s);
        drawLine(b3w2s, b1w2s);

        drawLine(a1w2s, b1w2s);
        drawLine(a2w2s, b2w2s);
        drawLine(a3w2s, b3w2s);
        drawLine(a4w2s, b4w2s);
    }
}
void Cheat::Items::Tick()
{
    UpdateDroppedItemsCache();
    UpdateAllItemsCache();
    //logAllActors(SDK::UWorld::GetWorld());
    if (Game::given_item) {
        SDK::ABPCharacter_Demo_C* BPPawn = Game::getBPPawn();
        if (BPPawn) {
            if (Game::given_item->IsDefaultObject()) {
                // Handle as default object, using ID or sm
                BPPawn->InvAddByName(Game::given_item->ID);
            }
            else {
                // Handle as fully initialized custom object
                BPPawn->InvAdd(Game::given_item);
            }
        }
        Game::given_item = nullptr;
    }
    
    // Drawing
    if (Config::box3DESP) {
        SDK::FVector Center{};
        SDK::FVector Bounds{};
        for (const auto& item : Game::dropped_items) {
            if (item.obj) {
                item.obj->GetActorBounds(true, &Center, &Bounds, false);
                Draw3DBox(Center, Bounds, Game::getPC(), true);

                //Game::getPC()->EnableCheats();
                //SDK::UEngine::GetEngine()->GameViewport->ViewportConsole = (SDK::UConsole*)SDK::UGameplayStatics::SpawnObject(SDK::UConsole::StaticClass(), SDK::UEngine::GetEngine()->GameViewport);
                //Game::getPC()->CheatManager = (SDK::UCheatManager*)SDK::UGameplayStatics::SpawnObject(SDK::UCheatManager::StaticClass(), Game::getPC());
            }
        }
    }

}
