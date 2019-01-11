#pragma once


class Vec {
public:
	Vec() = default;
	Vec(float x_in, float y_in) :x(x_in), y(y_in) {}
	Vec operator + (const Vec& rhs) const;
	Vec& operator += (const Vec& rhs);

	Vec operator * (const Vec& rhs) const;
	Vec& operator *= (const Vec& rhs);

	Vec operator * (float val) const;
	Vec& operator *= (float val);

public:
	float x;
	float y;
};