#include "Trainer.h"
Trainer ::Trainer(std::string FullName1, int age1, int height1, int Experience1, Scheme scheme1) : Human(FullName1, age1, height1), scheme(scheme1)
{
    Experience = Experience1;
}
std::string Trainer::ShowInfo()
{
    return FullName + ':' + "Age is " + std::to_string(age) + ';' + "Height is " + std::to_string(height) + ';' + "His experience is" + ' ' + std::to_string(Experience) + '.' + "Trainer's scheme is " + scheme.PrintScheme();
}