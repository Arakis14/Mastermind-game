#pragma once
#include "Pin.hpp"
#include <vector>


class Pins 
{
public:
Pins() = default;
void AddPin(const Pin &pin);
private:
std::vector<Pin> pins_;
};