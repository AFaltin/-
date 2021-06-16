#include "Match.h"
#include "CreateTeam2.h"

Match::Match(const Team& team11, const Team& team22, const Scheme& scheme11, const Scheme& scheme22, int goalsTeam11, int goalsTeam22)
{
    team1 = team11;
    team2 = team22;
    scheme1 = scheme11;
    scheme2 = scheme22;
    goalsTeam1 = goalsTeam11;
    goalsTeam2 = goalsTeam22;
}
void Match::SimulateMatch()
{
    int Randomgoals = rand()%10;
    std::list<Player> teamplayers1 =team1.GetTeamPlayers();
    int SumTeamplayers1 = 0;
    for (std::list<Player>::iterator it = teamplayers1.begin(); it != teamplayers1.end(); ++it)
    {
        SumTeamplayers1 += (*it).GetPrice();
    }
    std::list<Player> teamplayers2 = team2.GetTeamPlayers();
    int SumTeamplayers2 = 0;
    for (std::list<Player>::iterator it = teamplayers2.begin(); it != teamplayers2.end(); ++it)
    {
        SumTeamplayers1 += (*it).GetPrice();
    }
    if (SumTeamplayers1 >= SumTeamplayers2)
    {
        goalsTeam1 = Randomgoals + rand() % 3 +1;
        goalsTeam2 = Randomgoals;
    }
    else if (SumTeamplayers1 <= SumTeamplayers2)
    {
        goalsTeam2 = Randomgoals + rand() % 3 + 1;
        goalsTeam1 = Randomgoals;
    }
    else
        goalsTeam1 = goalsTeam2 = Randomgoals;

    std::cout << "Match ended with score  " << goalsTeam1 << "-" << goalsTeam2;
}