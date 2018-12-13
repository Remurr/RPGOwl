#pragma once

namespace OwlEngine
{
	struct Vec2D
	{
		Vec2D() 
			: x(0)
			, y(0)
		{}
		Vec2D(float inX, float inY)
			: x(inX)
			, y(inY)
		{}

		float x;
		float y;

		Vec2D operator+(const Vec2D &rhs)
		{
			return Vec2D(x + rhs.x, y + rhs.y);
		}
		Vec2D operator-(const Vec2D &rhs)
		{
			return Vec2D(x - rhs.x, y - rhs.y);
		}
		Vec2D operator*(float val)
		{
			return Vec2D(x * val, y * val);
		}
	};	
}
