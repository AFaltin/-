#pragma once
#include <string>
#include "Scheme.h"
#include "Team.h"


class Match
{
    Team team1;
    Team team2;
    Scheme scheme1;
    Scheme scheme2;
    int goalsTeam1;
    int goalsTeam2;
public:
    Match(const Team& team11, const Team& team22,const Scheme& scheme11, const Scheme& scheme22, int GoalsTeam11, int GoalsTeam22);
    void SimulateMatch();
};

