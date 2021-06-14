#include "ShowAllPlayers.h"

void ShowAllPlayers(std::list<Player> players)
{
    for (Player n : players)
    {
        std::cout << n.ShowInfo() + '\n';
    }
}