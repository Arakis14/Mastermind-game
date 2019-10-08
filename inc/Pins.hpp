#pragma once
#include <iostream>

enum class Color :  char
{
    RED = 'R',
    BLUE = 'B',
    GREEN = 'G',
    YELLOW = 'Y',
};

class Pins
{
private:
    Color color;
public:
    Pins() = default;
    Pins(Color c);
};