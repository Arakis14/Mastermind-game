#pragma once
#include <iostream>
#include <string>

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
    friend bool operator==(const Pin &lhs, const Pin &rhs);
    Pin() = default;
    Pin(Color c);
    void SetColor(Color color);
    std::string ToString() const;

    protected:
    Color color_;
};