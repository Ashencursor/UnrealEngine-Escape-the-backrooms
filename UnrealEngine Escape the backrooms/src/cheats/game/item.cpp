#include "item.h"

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




void Cheat::Items::Tick()
{
    UpdateDroppedItemsCache();
    UpdateAllItemsCache();
    logAllActors(SDK::UWorld::GetWorld());
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
}
