#pragma once
#include <string>

class Human
{
protected:
    std::string FullName;
    int age;
    int height;
public:
    Human(const std::string& FullName1, int age1, int height1);
    Human();
};

