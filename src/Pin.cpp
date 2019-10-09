#include "Pin.hpp"
#include <sstream>
#include <iomanip>


Pin::Pin(Color c)
    :color_(c)
{}

void Pin::SetColor(Color color) { color_= color; }
// std::ostream & operator << (std::ostream &out, const Pin &p)
// {
//     out << p.color_ << static_cast<char>(color_);
// }
std::string Pin::toString() const
{
    std::stringstream ss;
    ss << std::left;
    if (color_ == Color::RED)
        ss << std::setw(1) << "Color: " << static_cast<char>(color_);
    else if (color_ == Color::BLUE)
        ss << std::setw(1) << "Color: " << static_cast<char>(color_);
    else if (color_ == Color::GREEN)
        ss << std::setw(1) << "Color: " << static_cast<char>(color_);
    else if (color_ == Color::YELLOW)
        ss << std::setw(1) << "Color: " << static_cast<char>(color_);
    return ss.str();
}
