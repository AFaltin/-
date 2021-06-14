#include "ShowAllTrainers.h"

void ShowAllTrainers(Trainer trainer1, Trainer trainer2, Trainer trainer3)
{
    std::cout << trainer1.ShowInfo() << std::endl;
    std::cout << trainer2.ShowInfo() << std::endl;
    std::cout << trainer3.ShowInfo() << std::endl;
}