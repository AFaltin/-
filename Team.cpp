#include "Team.h"
Team::Team(const std::string& TeamName1, const std::string& Country1,const Trainer& trainer1) : trainer(trainer1)
{
    TeamName = TeamName1;
    Country = Country1;
}
Team::Team() : trainer()
{
    TeamName = " ";
    Country = "Ukraine";
}
void Team::AddTrainer( const Trainer& trainer1)
{
    trainer = trainer1;
}
void Team::AddTeamName(const std::string& TeamName1)
{
    TeamName = TeamName1;
}
void Team::AddPlayer(Player player)
{
    players.push_back(player);
}
Trainer Team ::GetTrainer()const
{
    return trainer;
}
std::list<Player> Team::GetTeamPlayers()const
{
    return players;
}
void Team::PrintPlayers()const
{
    for (const Player& n : players)
    {
        std::cout << n.Info() + '\n';
    }
}
void Team::ShowInfoTeam()const
{
    std::cout << "Team name is " + TeamName + ';' + "Native country  " + Country + ';' + '\n' + "Trainer :" + trainer.Info() + '\n' + "Line - up :" + '\n';
    PrintPlayers();
}