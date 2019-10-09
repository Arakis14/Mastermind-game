#include "Pin.hpp"


Pin::Pin(Color c)
    :color_(c)
{}

void Pin::SetColor(Color color) { color_= color; }