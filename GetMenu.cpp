#include"GetMenu.h"


int GetMenu(int EnteredNumber)
{
    int variant;
    std::string s;
    std::getline(std::cin, s);
    try
    {
        if (sscanf(s.c_str(), "%d", &variant) != 1 || variant < 1 || variant > EnteredNumber)
            throw "Incorrect input. Try again";
        return variant;
    }
    catch (const char* exception)
    {
        std::cerr << "Error: " << exception << '\n';
    }
    return variant;
}