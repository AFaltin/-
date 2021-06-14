#pragma once
#include <string>

class Match
{
    std::string Team1;
    std::string Team2;
    int GoalsTeam1;
    int GoalsTeam2;
public:
    Match(std::string Team11, std::string Team22, int GoalsTeam11, int GoalsTeam22);
};

