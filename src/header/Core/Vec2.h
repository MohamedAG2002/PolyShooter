#pragma once

#include <string>

namespace ps { // beginning of ps

class Vec2 
{
  public:
    Vec2(float x, float y)
      :x(x), y(y) 
    {}

    Vec2()
      :x(0.0f), y(0.0f) 
    {}

  public:
    float x, y; 

  public:
    static const Vec2 ZERO;

  public:
    // Operators overloading
    // -------------------------------------------
    const Vec2& operator=(const Vec2& other); 
    // -------------------------------------------
    
    // -------------------------------------------
    bool operator==(const Vec2& other);
    bool operator!=(const Vec2& other);
    // -------------------------------------------

    // -------------------------------------------
    Vec2 operator*(const Vec2& other);
    Vec2 operator*(const float f);
    Vec2& operator*=(Vec2 other);
    Vec2& operator*=(float f);
    // -------------------------------------------

    // -------------------------------------------
    Vec2 operator+(const Vec2& other);
    Vec2 operator+(float f);
    Vec2& operator+=(Vec2 other);
    Vec2& operator+=(float f);
    // -------------------------------------------

    // -------------------------------------------
    Vec2 operator-(const Vec2& other);
    Vec2 operator-(float f);
    Vec2& operator-=(Vec2 other);
    Vec2& operator-=(float f);
    // -------------------------------------------

    // Util functions
    // -------------------------------------------
    std::string ToString(); 
    // -------------------------------------------
};

} // end of ps
