#include "Vec.h"

Vec Vec::operator+(const Vec & rhs) const
{
	return Vec(x + rhs.x, y + rhs.y);
}

Vec & Vec::operator+=(const Vec & rhs)
{
	return *this = *this + rhs;
}

Vec Vec::operator*(const Vec & rhs) const
{
	return Vec(x * rhs.x, y * rhs.y);
}

Vec & Vec::operator*=(const Vec & rhs)
{
	return *this = *this * rhs;
}

Vec Vec::operator*(float val) const
{
	return Vec(x * val, y * val);
}

Vec & Vec::operator*=(float val)
{
	return *this = *this * val;
}
