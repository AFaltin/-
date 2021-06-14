#include "Team.h"
Team::Team(std::string TeamName1, std::string Country1, Trainer trainer1) : trainer(trainer1)
{
    TeamName = TeamName1;
    Country = Country1;
}
void Team::AddTrainer(Trainer trainer1)
{
    trainer = trainer1;
}
void Team::AddPlayer(Player player)
{
    players.push_back(player);
}
void Team::PrintPlayers()
{
    for (Player n : players)
    {
        std::cout << n.ShowInfo() + '\n';
    }
}
void Team::ShowInfoTeam()
{
    std::cout << "Team name is " + TeamName + ';' + "Native country  " + Country + ';' + '\n' + "Trainer :" + trainer.ShowInfo() + '\n' + "Line - up :" + '\n';
    PrintPlayers();
}