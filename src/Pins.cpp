#include "Pins.hpp"

void Pins::AddPin(const Pin &pin)
{
    pins_.emplace_back(pin);
}