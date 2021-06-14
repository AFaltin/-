#pragma once
#include <string>
#include "Human.h"
#include "Scheme.h"

class Trainer : public Human
{
    int Experience;
    Scheme scheme;
public:
    Trainer(std::string FullName1, int age1, int height1, int Experience1, Scheme scheme1);
    std::string ShowInfo();
};

