#include "CreateTeams.h"

void CreateTeams(std::list<Player> players, Trainer trainer1, Trainer trainer2, Trainer trainer3, Scheme scheme1, Scheme scheme2, Scheme scheme3)
{
    Scheme scheme0(0, 0, 0);
    Trainer trainer0(" ", 0, 0, 0, scheme0);
    Team team1("Dynamo", "Ukraine", trainer0);
    team1.AddTrainer(trainer1);
    Team team2("Shahtar", "Ukraine", trainer0);
    CreateTeam(team2, scheme2, trainer2, CreateTeam(team1, scheme1, trainer1, players));
}