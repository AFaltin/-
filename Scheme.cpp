#include "Scheme.h"
#include <stdexcept>

Scheme ::Scheme(int BackQuantity1, int HalfBackQuantity1, int ForwardQuantity1)
{
    if (BackQuantity < 0 || HalfBackQuantity < 0 || ForwardQuantity < 0 || BackQuantity + HalfBackQuantity + ForwardQuantity>11)
    {
        throw std::invalid_argument("Wrong scheme");
    }
    BackQuantity = BackQuantity1;
    HalfBackQuantity = HalfBackQuantity1;
    ForwardQuantity = ForwardQuantity1;
}

Scheme::Scheme()
{
    BackQuantity = 0;
    HalfBackQuantity = 0;
    ForwardQuantity = 0;
}

int Scheme::GetBackQuantity()const
{
    return BackQuantity;
}
int Scheme::GetHalfBackQuantity()const
{
    return HalfBackQuantity;
}
int Scheme::GetForwardQuantity()const
{
    return ForwardQuantity;
}
std ::string Scheme::PrintScheme()const
{
    return std::to_string(BackQuantity) + '-' + std::to_string(HalfBackQuantity) + '-' + std::to_string(ForwardQuantity) ;
}
