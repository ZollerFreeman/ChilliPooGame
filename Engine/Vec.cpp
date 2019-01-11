#include "Vec.h"

Vec Vec::operator+(const Vec & rhs) const
{
	return Vec(x + rhs.x, y + rhs.y);
}

Vec & Vec::operator+=(const Vec & rhs)
{
	return *this = *this + rhs;
}

Vec Vec::operator-(const Vec & rhs) const
{
	return Vec(x - rhs.x, y - rhs.y);
}

Vec & Vec::operator-=(const Vec & rhs)
{
	return *this = *this - rhs;
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

float Vec::GetLength() const
{
	return std::sqrt(GetLengthSq());
}

float Vec::GetLengthSq() const
{
	return x * x + y * y;
}

Vec & Vec::Normalize()
{
	return *this = GetNormalized();
}

Vec Vec::GetNormalized() const
{
	const float length = GetLength();
	if (length != 0.0f) { return *this * (1 / length); }
	else { return *this; }

	}




