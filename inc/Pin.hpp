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
    friend std::ostream &operator << (std::ostream out, const Pin &p);
    Pin() = default;
    Pin(Color c);
    void SetColor(Color color);
    std::string toString() const;

    private:
    Color color_;
};