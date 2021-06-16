#pragma once
#include <string>
#include "Human.h"
#include "Scheme.h"

class Trainer : public Human
{
    int Experience;
    Scheme scheme;
public:
    Trainer(const std::string& FullName1, int age1, int height1, int Experience1, const Scheme& scheme1);
    Trainer();
    std::string GetTrainersName()const;
    int GetTrainerBackQuantity() const;
    int GetTrainerHalfBackQuantity() const;
    int GetTrainerForwardQuantity() const;
    Scheme GetTrainerScheme()const;
    std::string Info()const;
};

