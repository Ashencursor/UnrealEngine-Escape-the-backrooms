#include "Cheat.h"
#include "game/item.h"
#include "game/player.h"
#include "../dependencies/imgui/imgui.h"
#include "../gui/gui.h"
#include <math.h>
#include <numbers>

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
// TESTING TESTING TESTING TESTING TESTING TESTING TESTING TESTING TESTING TESTING TESTING TESTING TESTING TESTING 

void updatePlayerCache()
{
    Game::players.clear();
    UC::TArray<SDK::AActor*> actors;

    SDK::UGameplayStatics::GetAllActorsOfClass(SDK::UWorld::GetWorld(), SDK::ABPCharacter_Demo_C::StaticClass(), &actors);

    for (int i = 0; i < actors.Num(); i++)
    {
        SDK::ABPCharacter_Demo_C* Character = (SDK::ABPCharacter_Demo_C*)actors[i];
        if (!Character->PlayerState)
        {
            continue;
        }

        Game::Player cache_entry = {};
        cache_entry.name = Character->PlayerState->GetPlayerName().ToString();
        cache_entry.pos = Character->K2_GetActorLocation();
        cache_entry.obj = Character;

        Game::players.push_back(cache_entry);
    }
}


void aimbotB() {
    SDK::FVector delta{};
    float pitch{};
    float yaw{};
    float _yaw{};
    float _pitch{};
    SDK::APlayerController* PC = Game::getPC();
    int count = 0;

    for (auto item : Game::dropped_items) {
        delta = item.pos - PC->Character->RootComponent->RelativeLocation;
        _yaw = std::atan2f(delta.Y, delta.X) * (180.0 / std::numbers::pi_v<float>);
        _pitch = std::atan2f(delta.Z, std::hypot(delta.X, delta.Y)) * (180.0 / std::numbers::pi_v<float>);
        if (count == 0) {
            yaw = _yaw;
            pitch = _pitch;
            count++;
        }
        // Check which item is closest to my crosshair
        if (yaw > _yaw && pitch > _pitch) {
            yaw = _yaw;
            pitch = _pitch;
        }
    }

    //clamp
    if (pitch < -90.0f) {
        pitch = -90.0f;
    }
    else if (pitch >= 90.0f) {
        pitch = 90.0f;
    }

    if (yaw >= 360.0f) {
        yaw -= 360.0f;
    }
    else if (yaw < 0.0f) {
        yaw += 360.0f;
    }

    SDK::FRotator rotation = PC->GetControlRotation();
    rotation.Pitch = pitch;
    rotation.Yaw = yaw;
    PC->SetControlRotation(rotation);
}

// TESTING TESTING TESTING TESTING TESTING TESTING TESTING TESTING TESTING TESTING TESTING TESTING TESTING TESTING 



//Main tick() that calls other tick()s
void Cheat::Tick()
{
    if (!shouldTick()) {
        return;
    }
    // Here we update the item and player info
    Items::Tick();
    aimbotB();
}
