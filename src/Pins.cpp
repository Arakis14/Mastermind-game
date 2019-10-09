#include "Pins.hpp"
#include <algorithm>
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
bool operator==(const Pins &lhs, const Pins &rhs)
{
    if (lhs.pins_.size() != rhs.pins_.size())
        return false;
    return (std::equal(lhs.pins_.begin(), lhs.pins_.end(),rhs.pins_.begin()));
}