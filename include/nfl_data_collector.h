#ifndef NFL_DATA_COLLECTOR_H
#define NFL_DATA_COLLECTOR_H
#include <string>

class NFLDataCollector {
public:
    void fetchPlayerData();
    std::string fetchTeamData();
};

#endif