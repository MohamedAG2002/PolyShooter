#include "../../header/Core/Color.h"

#include <cstdint>
#include <string>

namespace ps { // beginning of ps

// Static members definitions
// -------------------------------------------
const Color Color::Red(255, 0, 0);
const Color Color::Green(0, 255, 0);
const Color Color::Blue(0, 0, 255);
const Color Color::Black(0, 0, 0);
const Color Color::White(255, 255, 255);
const Color Color::Magenta(255, 0, 255);
const Color Color::Yellow(255, 255, 0);
const Color Color::Cyan(0, 255, 255);
const Color Color::Brown(127, 106, 79);
const Color Color::Transparent(0, 0, 0, 0);
// -------------------------------------------

// Operators overloading
// -------------------------------------------
bool Color::operator==(const Color& other)
{
  return (this->r == other.r) && (this->g == other.g) &&
         (this->b == other.b) && (this->a == other.a);
}

bool Color::operator!=(const Color& other)
{
  return (this->r != other.r) || (this->g != other.g) ||
         (this->b != other.b) || (this->a != other.a);
}
// -------------------------------------------

} // end of ps
