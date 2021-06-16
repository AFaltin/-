#pragma once
#include <string>
#include <list>
#include <iostream>
#include "Player.h"
#include "Scheme.h"
#include "Trainer.h"
class Team
{
    Trainer trainer;
    std::list <Player> players;
    std::string TeamName;
    std::string Country;
public:
    Team(const std::string& TeamName1, const std::string& Country1,const Trainer& trainer1);
    Team();
    void AddTeamName(const std::string& TeamName1);
    void AddTrainer(const Trainer& trainer1);
    void AddPlayer(Player player);
    Trainer GetTrainer()const;
    std::list<Player>GetTeamPlayers()const;
    void PrintPlayers()const;
    void ShowInfoTeam()const;
};

