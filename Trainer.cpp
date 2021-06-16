#include "Trainer.h"
Trainer ::Trainer(const std::string& FullName1, int age1, int height1, int Experience1,const Scheme& scheme1) : Human(FullName1, age1, height1), scheme(scheme1)
{
    Experience = Experience1;
}
Trainer::Trainer()
{
    Experience = 0;
}
std::string Trainer::GetTrainersName()const
{
    return FullName;
}
int Trainer::GetTrainerBackQuantity()const
{
    return scheme.GetBackQuantity();
}
int Trainer::GetTrainerHalfBackQuantity() const
{
    return scheme.GetHalfBackQuantity();
}
int Trainer::GetTrainerForwardQuantity()const
{
    return scheme.GetForwardQuantity();
}
Scheme Trainer::GetTrainerScheme()const
{
    return scheme;
}
std::string Trainer::Info()const
{
    return FullName + ':' + "Age is " + std::to_string(age) + ';' + "Height is " + std::to_string(height) + ';' + "His experience is" + ' ' + std::to_string(Experience)+";" + scheme.PrintScheme() + '.';
}