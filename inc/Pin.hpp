#pragma once
#include <iostream>

enum class Color :  char
{
    RED = 'R',
    BLUE = 'B',
    GREEN = 'G',
    YELLOW = 'Y',
};

class Pin
{
private:
    Color color;
public:
    Pin() = default;
    Pin(Color c);
};