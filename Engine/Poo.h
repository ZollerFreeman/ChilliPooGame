#pragma once

#include "Graphics.h"
#include "Dude.h"
#include "Vec.h"

class Poo
{
public:
	void Init(const Vec& pos_in, const Vec& vel_in);
	void Update( float dt );
	bool TestCollision( const Dude& dude ) const;
	void Draw( Graphics& gfx ) const;
private:
	Vec pos;
	Vec vel;
	static constexpr float width = 24.0f;
	static constexpr float height = 24.0f;
	bool initialized = false;
};