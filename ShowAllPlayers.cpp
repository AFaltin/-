#include "ShowAllPlayers.h"

void ShowAllPlayers(const std::list<Player>& players)
{
    for (const Player& n : players)
    {
        std::cout << n.Info() + '\n';
    }
}