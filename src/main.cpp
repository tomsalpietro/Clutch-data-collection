#include "nfl_data_collector.h"
#include <nlohmann/json.hpp>
#include <iostream>

using json = nlohmann::json;


int main() {
    std::string team_data;

    NFLDataCollector collector;
    //collector.fetchPlayerData();
    
    team_data = collector.fetchTeamData();
    json parsed_team_data = json::parse(team_data)["teams"];

    int i = 0;
    for (const auto& team : parsed_team_data) {
        if (team.contains("alias") && team.contains("id") && team.contains("market") && team.contains("name") && team.contains("sr_id")) {
            std::string alias = team["alias"];
            std::string id = team["id"];
            std::string market = team["market"];
            std::string name = team["name"];
            std::string sr_id = team["sr_id"];

            // Print the parsed data
            std::cout << "Alias: " << alias << ", ID: " << id 
                    << ", Market: " << market << ", Name: " << name 
                    << ", SR ID: " << sr_id << std::endl;
        }
    }


    return 0;
}