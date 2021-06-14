#include "CreateTeam.h"

std::list<Player> CreateTeam(Team team, Scheme scheme, Trainer trainer, std::list<Player> players)
{
    team.AddTrainer(trainer);
    int BackQuantity = scheme.GetBackQuantity();

    for (int i = 0; i < BackQuantity; i++)
    {
        auto itB = players.cbegin();
        for (Player player : players)
        {
            if (player.GetPosition() == 1)
            {
                team.AddPlayer(player);
                players.erase(itB);

                break;
            }
            itB++;
        }
    }

    int HalfBackQuantity = scheme.GetHalfBackQuantity();
    for (int i = 0; i < HalfBackQuantity; i++)
    {
        auto itHB = players.cbegin();
        for (Player player : players)
        {
            if (player.GetPosition() == 2)
            {
                team.AddPlayer(player);
                players.erase(itHB);

                break;
            }
            itHB++;
        }
    }
    int ForwardQuantity = scheme.GetForwardQuantity();
    for (int i = 0; i < ForwardQuantity; i++)
    {
        auto itF = players.cbegin();
        for (Player player : players)
        {
            if (player.GetPosition() == 3)
            {
                team.AddPlayer(player);
                players.erase(itF);
                break;
            }
            itF++;
        }
    }
    team.ShowInfoTeam();
    return players;
}