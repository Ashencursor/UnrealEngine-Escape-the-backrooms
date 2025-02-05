#pragma once
#include <vector>
#include <string>
#include "../../dependencies/CppSDK/SDK.hpp"

// The Player/Item folders should update the player info and item info, and beable to list all the items out
namespace Game 
{
	struct Player
	{
		std::string name;
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

	
	inline std::vector<Player> players;
	inline std::vector<Item> all_items;
	inline std::vector<DroppedItem> dropped_items;
}