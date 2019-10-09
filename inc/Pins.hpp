#pragma once
#include "Pin.hpp"
#include <vector>

class Pins 
{
public:
Pins() = default;
void AddPin(const Pin &pin);
void PrintPins();
protected:
std::vector<Pin> pins_;
};