#include "../../header/Core/Vec2.h"

#include <string>

namespace ps { // beginning of ps

// Static variables definitions
// -------------------------------------------
inline const Vec2 Vec2::ZERO(0.0f, 0.0f);
// -------------------------------------------

// -------------------------------------------
const Vec2& Vec2::operator=(const Vec2& other)
{
  this->x = other.x;
  this->y = other.y;
  
  return *this;
}
// -------------------------------------------

// -------------------------------------------
bool Vec2::operator==(const Vec2& other)
{
  return (this->x == other.x) && (this->y == other.y);
}

bool Vec2::operator!=(const Vec2& other)
{
  return (this->x != other.x) || (this->y != other.y);
}
// -------------------------------------------

// -------------------------------------------
Vec2 Vec2::operator*(const Vec2& other)
{
  return Vec2(this->x * other.x, this->y * other.y);
}

Vec2 Vec2::operator*(const float f)
{
  return Vec2(this->x * f, this->y * f);
}

Vec2& Vec2::operator*=(Vec2 other)
{
  this->x *= other.x;
  this->y *= other.y;

  return *this;
}

Vec2& Vec2::operator*=(float f)
{
  this->x *= f;
  this->y *= f; 

  return *this;
}
// -------------------------------------------

// -------------------------------------------
Vec2 Vec2::operator+(const Vec2& other)
{
  return Vec2(this->x + other.x, this->y + other.y); 
}

Vec2 Vec2::operator+(float f)
{
  return Vec2(this->x + f, this->y + f); 
}

Vec2& Vec2::operator+=(Vec2 other)
{
  this->x = this->x + other.x;
  this->y = this->y + other.y;

  return *this;
}

Vec2& Vec2::operator+=(float f)
{ 
  this->x = this->x + f;
  this->y = this->y + f;

  return *this;
}
// -------------------------------------------

// -------------------------------------------
Vec2 Vec2::operator-(const Vec2& other)
{
  return Vec2(this->x - other.x, this->y - other.y); 
}

Vec2 Vec2::operator-(float f)
{
  return Vec2(this->x - f, this->y - f); 
}

Vec2& Vec2::operator-=(Vec2 other)
{
  this->x = this->x - other.x;
  this->y = this->y - other.y;

  return *this;
}

Vec2& Vec2::operator-=(float f)
{ 
  this->x = this->x - f;
  this->y = this->y - f;

  return *this;
}
// -------------------------------------------

// -------------------------------------------
std::string Vec2::ToString()
{
  return std::to_string(x) + ", " + std::to_string(y);
}
// -------------------------------------------

} // end of ps
