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
    Team(std::string TeamName1, std::string Country1, Trainer trainer1);
    void AddTrainer(Trainer trainer1);
    void AddPlayer(Player player);
    void PrintPlayers();
    void ShowInfoTeam();
};

