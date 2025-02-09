#include "Cheat.h"
#include "game/item.h"
#include "game/player.h"

bool shouldTick()
{
    SDK::UWorld* World = SDK::UWorld::GetWorld();
    if (!World ||
        !World->PersistentLevel ||
        !World->OwningGameInstance ||
        !World->OwningGameInstance->LocalPlayers[0] ||
        !World->OwningGameInstance->LocalPlayers[0]->PlayerController)
    {
        return false;
    }

    return true;
}

//Main tick() that calls other tick()s
void Cheat::Tick()
{
    if (!shouldTick()) {
        return;
    }
    // Here we update the item and player info
    Items::Tick();
}
