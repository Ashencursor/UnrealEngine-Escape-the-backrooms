#pragma once
#include <vector>
#include <string>
#include "../../dependencies/CppSDK/SDK.hpp"
#include "../../Math/Vector.h"

// The Player/Item folders should update the player info and item info, and beable to list all the items out
namespace Game 
{
	struct Player
	{
		std::string name;
		SDK::FVector pos;
		SDK::APawn* obj;
	};
	struct Item
	{
		std::string name;
		SDK::ADroppedItem* obj;
	};
	struct DroppedItem
	{
		std::string name;
		SDK::FVector pos;
		//ScreenPos screen_pos;
		SDK::ADroppedItem* obj;
	};

	SDK::APlayerController* getPC();
	SDK::APawn* getPawn();
	SDK::ABPCharacter_Demo_C* getBPPawn();
	bool W2S(SDK::FVector world_pos, SDK::FVector2D& screen_pos);

	inline std::vector<SDK::AActor*> world_actors;

	inline SDK::ADroppedItem* given_item;
	inline std::vector<Player> players;
	inline std::vector<Item> all_items;
	inline std::vector<DroppedItem> dropped_items;
}