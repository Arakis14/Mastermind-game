#pragma once
#include <iostream>

class Pin
{
public:
    enum class Color :  char
    {
        RED = 'R',
        BLUE = 'B',
        GREEN = 'G',
        YELLOW = 'Y',
    };

    Pin() = default;
    Pin(Color c);
    void SetColor(Color color);

    private:
    Color color_;
};