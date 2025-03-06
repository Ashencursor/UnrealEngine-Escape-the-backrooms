#include "../gui.h"
#include "../../cheats/game/game.h"

void droppedItems()
{
    ImGui::Begin("Dropped Items");

    if (ImGui::BeginTable("Table", 3, ImGuiTableFlags_Borders | ImGuiTableFlags_RowBg)) {
        // Set up table headers
        ImGui::TableSetupColumn("Name");
        ImGui::TableSetupColumn("Position");
        ImGui::TableSetupColumn("Action");
        ImGui::TableHeadersRow();

        for (size_t i = 0; i < Game::dropped_items.size(); ++i) {
            ImGui::TableNextRow();
            ImGui::PushID(Game::dropped_items[i].obj);

            // Column 1: Name
            ImGui::TableSetColumnIndex(0);
            ImGui::Text("%s", Game::dropped_items[i].name.c_str());
            // Column 2: Position
            ImGui::TableSetColumnIndex(1);
            ImGui::Text("(%.2f, %.2f, %.2f)",
                Game::dropped_items[i].pos.X,
                Game::dropped_items[i].pos.Y,
                Game::dropped_items[i].pos.Z);
            // Column 3: Button
            ImGui::TableSetColumnIndex(2);
            if (ImGui::Button("Give Item"))
            {
                // Custom Logic
                Game::given_item = Game::dropped_items[i].obj;
            }
            ImGui::PopID();
        }

        ImGui::EndTable();
    }
    ImGui::End();
}
