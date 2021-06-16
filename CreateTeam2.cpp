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
    int x = 3;
    
  /*  do {
        TrainerNumber = GetMenu(x);
        switch (TrainerNumber)
        {
        case 1:
            trainer = (*it);
            std::cout << "You choosed " << trainer.GetTrainersName() << " as a trainer." << std::endl;
            trainers.erase(it);
            x--;
            CreateTeam(team, trainer, players).ShowInfoTeam();
            break;
        case 2:
            it++;
            trainer = (*it);
            std::cout << "You choosed " << trainer.GetTrainersName() << " as a trainer." << std::endl;
            trainers.erase(it);
            x--;
            CreateTeam(team, trainer, players).ShowInfoTeam();
            break;
        case 3:
            it++;
            trainer = (*it);
            std::cout << "You choosed " << trainer.GetTrainersName() << " as a trainer." << std::endl;
            trainers.erase(it);
            CreateTeam(team, trainer, players).ShowInfoTeam();
            break;
        }if (TrainerNumber != x)
            system("pause");
    } while (TrainerNumber != x);*/
    if (TrainerNumber == 1)
    {
        trainer = (*it);
        std::cout << "You choosed " << trainer.GetTrainersName() << " as a trainer." << std::endl;
        trainers.erase(it);
        x--;
    }
    else if (TrainerNumber == 2)
    {
        it++;
        trainer = (*it);
        std::cout << "You choosed " << trainer.GetTrainersName() << " as a trainer." << std::endl;
        trainers.erase(it);
        x--;
    }
    else if (TrainerNumber == 3)
    {
        it++;
        trainer = (*it);
        std::cout << "You choosed " << trainer.GetTrainersName() << " as a trainer." << std::endl;
        trainers.erase(it);
        x--;
    }
    return  CreateTeam1(team, trainer, players);
    
//    Team team2();
    

//    CreateTeam(team2,trainer2, players);
    
}