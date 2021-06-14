#pragma once
#include <string>
class Scheme
{
    int BackQuantity;
    int HalfBackQuantity;
    int ForwardQuantity;
public:
    Scheme(int BackQuantity1, int HalfBackQuantity1, int ForwardQuantity1);
    int GetBackQuantity();
    int GetHalfBackQuantity();
    int GetForwardQuantity();
    std::string PrintScheme();
};

