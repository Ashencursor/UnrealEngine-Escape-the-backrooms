#include "../gui.h"
#include <string>
#include "../../cheats/game/game.h"

void allDroppedItems() 
{
	ImGui::Begin("All Items");

    if (ImGui::BeginTable("Table", 2, ImGuiTableFlags_Borders | ImGuiTableFlags_RowBg)) {
        // Set up table headers
        ImGui::TableSetupColumn("Name");
        ImGui::TableSetupColumn("Action");
        ImGui::TableHeadersRow();

        for (size_t i = 0; i < Game::all_items.size(); ++i) {
            ImGui::TableNextRow();
            ImGui::PushID(Game::all_items[i].obj);

            // Column 1: Name
            ImGui::TableSetColumnIndex(0);
            ImGui::Text("%s", Game::all_items[i].name.c_str());

            // Column 2: Button
            ImGui::TableSetColumnIndex(1);
            if (ImGui::Button("Give Item"))
            {
                // Custom Logic
                Game::given_item = Game::all_items[i].obj;
            }
            ImGui::PopID();
        }

        ImGui::EndTable();
    }
	ImGui::End();
}