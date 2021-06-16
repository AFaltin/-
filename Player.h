#pragma once
#include <string>
#include "Human.h"
class Player :
    public Human
{
    int Position;
    int EstimatedPrice;
public:
    static const int Back = 1;
    static const int HalfBack = 2;
    static const int Forward = 3;
    Player(const std::string& FullName1, int age1, int height1, int Position1, int EstimatedPrice1);
    int GetPosition()const;
    int GetPrice()const;
    std ::string Info()const;
};

