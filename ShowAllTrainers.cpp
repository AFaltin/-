#include "ShowAllTrainers.h"
void ShowAllTrainers(const std::list<Trainer>&trainers)
{
    int i = 1;
    for (const Trainer& n : trainers)
    {
        std::cout << i<<" " << n.Info()<<std::endl;
        i++;
    }
}