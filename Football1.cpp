#include <iostream>
#include <string>
#include <list>
#include "Player.h"
#include "Scheme.h"
#include "Trainer.h"
#include "Team.h"
#include "CreateTeam1.h"
#include "CreateTeam2.h"
#include "ShowAllTrainers.h"
#include "ShowAllPlayers.h"
#include "PrintMenu.h"
#include "GetMenu.h"
#include "Match.h"
 
using namespace std;

int main()
{
    Player Back1("Popov Denis ", 22, 185, Player::Back, 500000);
    Player Back2("Vitalii Mykolenko ", 22, 180, Player::Back, 600000);
    Player Back3("Vladimir Kostevich ", 28, 185, Player::Back, 400000);
    Player Back4("Alexander Tymchik", 24, 180, Player::Back, 200000);
    Player Back5("Ilya Zabarniy ", 18, 186, Player::Back, 350000);
    Player Back6("Nikita Burda ", 26, 187, Player::Back, 500000);
    Player Back7("Alexander Sirota ", 21, 193, Player::Back, 700000);
    Player Back8("Tomash Kendziora ", 27, 183, Player::Back, 800000);
    Player Back9("Sergey Kryvtsov ", 30, 182, Player::Back, 550000);
    Player Back10("David Hocholava ", 28, 183, Player::Back, 700000);
    Player Back11("Victor Kornienko ", 22, 184, Player::Back, 500000);
    Player Back12("Valeriy Bondar ", 22, 190, Player::Back, 450000);
    Player Back13("Nikolai Matvienko ", 25, 184, Player::Back, 550000);
    Player HalfBack1("Taras Stepanenko ", 31, 180, Player::HalfBack, 500000);
    Player HalfBack2("Markos Antonio ", 21, 183, Player::HalfBack, 700000);
    Player HalfBack3("Monor Solomon ", 21, 185, Player::HalfBack, 560000);
    Player HalfBack4("Alan Patrik ", 30, 185, Player::HalfBack, 350000);
    Player HalfBack5("Markinios Sipriano ", 22, 187, Player::HalfBack, 500000);
    Player HalfBack6("Maksym Malyshev ", 28, 184, Player::HalfBack, 330000);
    Player HalfBack7("Evhenii Konoplyanka ", 31, 177, Player::HalfBack, 1100000);
    Player HalfBack8("Sergey Bolbat ", 28, 179, Player::HalfBack, 600000);
    Player HalfBack9("Sergey Sydorchuk ", 30, 189, Player::HalfBack, 800000);
    Player HalfBack10("Vladimir Shepelev ", 24, 184, Player::HalfBack, 650000);
    Player HalfBack11("Bogdan Lednev ", 23, 173, Player::HalfBack, 450000);
    Player HalfBack12("Denis Garmash ", 31, 186, Player::HalfBack, 660000);
    Player HalfBack13("Alexander Karavaev ", 29, 175, Player::HalfBack, 500000);
    Player HalfBack14("Vitalii Byalski ", 28, 170, Player::HalfBack, 440000);
    Player Forward1("Artem Besedin ", 25, 185, Player::HalfBack, 660000);
    Player Forward2("Jerson Rodrigez ", 25, 188, Player::Forward, 1100000);
    Player Forward3("Vladislav Supryaga ", 22, 182, Player::Forward, 700000);
    Player Forward4("Junior Moraes ", 34, 182, Player::Forward, 950000);
    Player Forward5("Fernando ", 22, 183, Player::Forward, 550000);
    Player Forward6("Clayton ", 25, 173, Player::Forward, 650000);
    Player Forward7("Maicon ", 23, 177, Player::Forward, 1000000);
    Player Forward8("Tete ", 21, 182, Player::Forward, 650000);
    Player Forward9("Dentinio ", 32, 178, Player::Forward, 750000);
    Player Forward10("Marlos ", 33, 182, Player::Forward, 1500000);
    list <Player> players = { Back1,Back2,Back3,Back4,Back5,Back6,Back7,Back8,Back9,Back10,Back11,Back12,Back13,
    HalfBack1,HalfBack2,HalfBack3,HalfBack4,HalfBack5,HalfBack6,HalfBack7,HalfBack8,HalfBack9,HalfBack10,HalfBack11,HalfBack12,HalfBack13,HalfBack14,
    Forward1,Forward2,Forward3,Forward4,Forward5,Forward6,Forward7,Forward8,Forward9,Forward10 };
    Scheme scheme1(3, 5, 2);
    Trainer trainer1("Mirche Luchesku ", 75, 178, 30, scheme1);
    Scheme scheme2(4, 4, 2);
    Trainer trainer2("Roberto de Dzerbi ", 42, 181, 8, scheme2);
    Scheme scheme3(5, 4, 1);
    Trainer trainer3("Oleg Gusev ", 37, 183, 5, scheme3);
    list<Trainer> trainers = { trainer1 ,trainer2,trainer3};
    
    int variant;
    do {
        PrintMenu();
        variant = GetMenu(5);
        switch (variant)
        {
        case 1:
        {
            std::cout << "Enter first team's name" << std::endl;
            Team team1 = CreateTeam2(players, trainers);
            team1.ShowInfoTeam();
            cout << endl;
            std::cout << "Enter second team's name" << std::endl;
            Team team2 = CreateTeam2(players, trainers);
            team2.ShowInfoTeam();
            cout << " Simulating match ..." << endl;
            cout << endl;
            Match(team1, team2, team1.GetTrainer().GetTrainerScheme(), team2.GetTrainer().GetTrainerScheme(), 0, 0).SimulateMatch();
        }
        case 2:
            ShowAllPlayers(players);
            break;
        case 3:
            ShowAllTrainers(trainers);
            break;
        }if (variant != 4)
            system("pause");
    } while (variant != 4);

    return 0;
}

