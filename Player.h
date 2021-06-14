#pragma once
#include <string>
#include "Human.h"
class Player :
    public Human
{
    int Position;
    int EstimatedPrice;
public:
    Player(std::string FullName1, int age1, int height1, int Position1, int EstimatedPrice1);
    int GetPosition();
    std ::string ShowInfo();
};

