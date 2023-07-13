#pragma once

#include <cstdint>
#include <string>

namespace ps { // beginning of ps

class Color
{
  public:
    Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
      :r(r), g(g), b(b), a(a) 
    {}

    Color(uint8_t r, uint8_t g, uint8_t b)
      :r(r), g(g), b(b), a(255) 
    {}

    Color()
      :r(0), g(0), b(0), a(0)
    {}

  public:
    uint8_t r, g, b, a;

  public:
    static const Color Red;
    static const Color Green;
    static const Color Blue;
    static const Color Black;
    static const Color White;
    static const Color Magenta;
    static const Color Yellow;
    static const Color Cyan;
    static const Color Brown;
    static const Color Transparent;

  public:
    // Operators overloading stuff
    // -------------------------------------------
    bool operator==(const Color& other);
    bool operator!=(const Color& other);
    // -------------------------------------------

  public:
    // Util functions
    // -------------------------------------------
    std::string ToString(); 
    // -------------------------------------------
};

} // end of ps
