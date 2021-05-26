#include <iostream>

using namespace std;


class Human
{
protected:
    string FullName;
    int age;
    int height;
    Human (string FullName1, int age1 , int height1)
    {
        FullName = FullName1;
        age = age1 ;
        height = height1;
    }
};
class Player : protected Human
{
protected:
    string Position;
    int EstimatedPrice;
    Player (string Position1, int EstimatedPrice1)
    {
        Position = Position1;
        EstimatedPrice = EstimatedPrice1 ;
    }
};
class Trainer : protected Human
{
protected:
    int Experience;
    string TacticalSchemes;
    Trainer (int Experience1, string TacticalSchemes1)
    {
        Experience = Experience1;
        TacticalSchemes = TacticalSchemes1 ;
    }
};
class Team : protected Player , protected Trainer
{
protected:
    string TeamName;
    string Country;
    Team (string TeamName1, string Country1)
    {
        TeamName = TeamName1;
        Country = Country1 ;
    }
};
class Tactic
{
protected:
    int BackQuantity;
    int HalfBackQuantity;
    int ForwardQuantity;
};
class Match : public Team
{
protected:
    string Team1;
    string Team2;
    int GoalsTeam1;
    int GoalsTeam2;
};



int main()
{
    return 0;
}
