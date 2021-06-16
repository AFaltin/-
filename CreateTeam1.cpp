#include "CreateTeam1.h"

Team CreateTeam1(Team team, const Trainer& trainer, std::list<Player>& players)
{
    team.AddTrainer(trainer);
    int BackQuantity = trainer.GetTrainerBackQuantity();

    for (int i = 0; i < BackQuantity; i++)
    {
        auto itB = players.cbegin();
        for (Player player : players)
        {
            if (player.GetPosition() == Player::Back)
            {
                team.AddPlayer(player);
                players.erase(itB);

                break;
            }
            itB++;
        }
    }

    int HalfBackQuantity = trainer.GetTrainerHalfBackQuantity();
    for (int i = 0; i < HalfBackQuantity; i++)
    {
        auto itHB = players.cbegin();
        for (Player player : players)
        {
            if (player.GetPosition() == Player::HalfBack)
            {
                team.AddPlayer(player);
                players.erase(itHB);

                break;
            }
            itHB++;
        }
    }
    int ForwardQuantity = trainer.GetTrainerForwardQuantity();
    for (int i = 0; i < ForwardQuantity; i++)
    {
        auto itF = players.cbegin();
        for (Player player : players)
        {
            if (player.GetPosition() == Player::Forward)
            {
                team.AddPlayer(player);
                players.erase(itF);
                break;
            }
            itF++;
        }
    }
    return team;
}