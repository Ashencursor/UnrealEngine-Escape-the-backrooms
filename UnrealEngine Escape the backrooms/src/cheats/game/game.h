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
	};
	struct DroppedItem
	{
		std::string name;
		SDK::FVector pos;
		SDK::APawn* Obj;
	};

	inline std::vector<Player> players;
	inline std::vector<Item> items;
	inline std::vector<DroppedItem> dropped_items;
}