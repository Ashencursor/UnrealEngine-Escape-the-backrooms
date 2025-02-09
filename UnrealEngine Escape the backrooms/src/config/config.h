#pragma once


// Configuration for cheat menu
namespace Config
{
	inline bool fov_changer = false;
	inline float fov_value{ 90.0f };

	inline bool items_window = false;
	inline bool dropped_items_window = false;

	inline bool no_clip = false;

	inline bool fly = false;
	inline float fly_speed;

	inline bool gravity = false;
	inline float gravity_pull = 1.0f;

	inline float o_walk_speed;
	inline float walk_speed;
	inline bool speed_hack = false;

	inline bool jump = false;
	inline float jump_power{};
};