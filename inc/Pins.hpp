#pragma once
#include "Pin.hpp"
#include <vector>

class Pins 
{
public:
Pins() = default;
void AddPin(const Pin &pin);
void PrintPins();
friend bool operator==(const Pins &lhs, const Pins &rhs);
protected:
std::vector<Pin> pins_;
};