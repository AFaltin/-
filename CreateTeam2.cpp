#include "CreateTeam2.h"
#include "ShowAllTrainers.h"
#include"GetMenu.h"

Team CreateTeam2(std::list<Player>& players, std::list<Trainer>& trainers)
{
    Team team;
    Trainer trainer;
    std::string Name;
    std::cin >> Name;
    team.AddTeamName(Name);
    std::cout << "Choose trainer for your team" << std::endl;
    ShowAllTrainers(trainers);
    int TrainerNumber;
    std::cin >> TrainerNumber;
    auto it = trainers.cbegin();
    
    if (TrainerNumber == 1)
    {
        trainer = (*it);
        std::cout << "You choosed " << trainer.GetTrainersName() << " as a trainer." << std::endl;
        trainers.erase(it);
    }
    else if (TrainerNumber == 2)
    {
        it++;
        trainer = (*it);
        std::cout << "You choosed " << trainer.GetTrainersName() << " as a trainer." << std::endl;
        trainers.erase(it);
    }
    else if (TrainerNumber == 3)
    {
        it=trainers.end();
        trainer = (*it);
        std::cout << "You choosed " << trainer.GetTrainersName() << " as a trainer." << std::endl;
        trainers.erase(it);
        x--;
    }else
        std::cout << "Incorrect input";
    return  CreateTeam1(team, trainer, players);
    
    
}
