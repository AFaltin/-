#include "Scheme.h"

Scheme ::Scheme(int BackQuantity1, int HalfBackQuantity1, int ForwardQuantity1)
{
    BackQuantity = BackQuantity1;
    HalfBackQuantity = HalfBackQuantity1;
    ForwardQuantity = ForwardQuantity1;
}
int Scheme::GetBackQuantity()
{
    return BackQuantity;
}
int Scheme::GetHalfBackQuantity()
{
    return HalfBackQuantity;
}
int Scheme::GetForwardQuantity()
{
    return ForwardQuantity;
}
std ::string Scheme::PrintScheme()
{
    return std::to_string(BackQuantity) + '-' + std::to_string(HalfBackQuantity) + '-' + std::to_string(ForwardQuantity) + ';';
}