#pragma once

enum class Color : char
{
    RED,
    BLUE,
    GREEN,
    YELLOW
};

class Pins
{
private:
    Color color = Color::RED;
public:
    Pins() = default;
    Pins(Color c);
};