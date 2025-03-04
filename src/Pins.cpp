#include "Pins.hpp"
#include <algorithm>
#include <ctime>

void Pins::AddPin(const Pin &pin)
{
    pins_.emplace_back(pin);
}

void Pins::DeletePins()
{
    pins_.clear();
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
void Pins::GetRandomPins()
{
    int random {};
    pins_.clear();
    for (auto i = 0; i < 4; i++)
    {
        random = rand() % 6;
        AddPin(testCombination1.at(random));
    }
}

bool operator==(const Pins &lhs, const Pins &rhs)
{
    if (lhs.pins_.size() != rhs.pins_.size())
        return false;
    return (std::equal(lhs.pins_.begin(), lhs.pins_.end(),rhs.pins_.begin()));
}

Pin Pins::operator[] (int index)
{
    if (index >= pins_.size())
    {
        std::cout << "Index out of bounds, exiting";
        exit(0);
    }
    return pins_.at(index);
}