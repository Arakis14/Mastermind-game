#pragma once
#include "Combinations.hpp"
#include "Pin.hpp"
#include <vector>

class Pins 
{
public:
Pins() = default;
void AddPin(const Pin &pin);
void DeletePins();
void PrintPins();
friend bool operator==(const Pins &lhs, const Pins &rhs);
Pin operator[] (int index);
void GetRandomPins();
protected:
std::vector<Pin> pins_;
};