#include "game.h"

SDK::APlayerController* Game::getPC()
{
    SDK::UWorld* World = SDK::UWorld::GetWorld();
    SDK::APlayerController* MyController = World->OwningGameInstance->LocalPlayers[0]->PlayerController;
    return MyController;
}

SDK::APawn* Game::getPawn()
{
    SDK::APlayerController* PC = getPC();
    if (!PC)
    {
        return nullptr;
    }
    return PC->AcknowledgedPawn;
}

SDK::ABPCharacter_Demo_C* Game::getBPPawn()
{
    SDK::APawn* pawn = getPawn();
    if (!pawn || !pawn->IsA(SDK::ABPCharacter_Demo_C::StaticClass()))
    {
        return nullptr;
    }
    return reinterpret_cast<SDK::ABPCharacter_Demo_C*>(pawn);
}
