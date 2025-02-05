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

void printAllDroppedItems()
{
    for (const auto& item : Game::all_items) {
        std::cout << " [-]Game Items:   " << item.name << '\n';
    }
}
void printDroppedItems() 
{
    for (const auto& item : Game::dropped_items) {
        std::cout << " [+]Dropped Items " << item.name << '\n';
    }
}
void Cheat::Items::Tick()
{
    UpdateDroppedItemsCache();
    UpdateAllItemsCache();
#ifdef _DEBUG
    printAllDroppedItems();
    printDroppedItems();
#endif
}
