#pragma once
#include <string>
class Scheme
{
    int BackQuantity;
    int HalfBackQuantity;
    int ForwardQuantity;
public:
    Scheme(int BackQuantity1, int HalfBackQuantity1, int ForwardQuantity1);
    Scheme();
    int GetBackQuantity() const;
    int GetHalfBackQuantity()const;
    int GetForwardQuantity()const;
    std::string PrintScheme()const;
};

