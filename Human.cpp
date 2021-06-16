#include "Human.h"

Human :: Human(const std::string& FullName1, int age1, int height1)
{
    FullName = FullName1;
    age = age1;
    height = height1;
}

Human::Human()
{
    FullName = " ";
    age = 0;
    height = 0;
}
