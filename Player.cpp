#include "Player.h"
 
Player ::Player(std::string FullName1, int age1, int height1, int Position1, int EstimatedPrice1) : Human(FullName1, age1, height1)
{
    Position = Position1;
    EstimatedPrice = EstimatedPrice1;
}
int Player :: GetPosition()
{
    return Position;
}
std::string  Player ::ShowInfo()
{
    if (Position == 1)
    {
        return  FullName + ':' + "Age is " + std::to_string(age) + ';' + "Height is " + std ::to_string(height) + ';' + "His position is Back; " + "His price is" + ' ' + std::to_string(EstimatedPrice) + '.';
    }
    else if (Position == 2)
    {
        return  FullName + ':' + "Age is " + std::to_string(age) + ';' + "Height is " + std::to_string(height) + ';' + "His position is HalfBack;" + "His price is" + ' ' + std::to_string(EstimatedPrice) + '.';
    }
    else
        return  FullName + ':' + "Age is " + std::to_string(age) + ';' + "Height is " + std::to_string(height) + ';' + "His position is Forward ;" + "His price is " + ' ' + std::to_string(EstimatedPrice) + '.';
}