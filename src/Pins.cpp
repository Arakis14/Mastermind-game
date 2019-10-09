#include "Pins.hpp"

void Pins::AddPin(const Pin &pin)
{
    pins_.emplace_back(pin);
}
void Pins::PrintPins()
{
    std::vector<std::string>v{};
    for (auto const & pin : pins_)
    {
        v.emplace_back(pin.ToString());
    }
    for (auto const & ele : v)
    {
        std::cout << ele << " ";
    }
    std::cout << "\n";
}