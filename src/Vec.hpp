#pragma once

#include "Swizzle.hpp"


template<size_t N, typename T>
struct Vec;

template<typename T>
struct Vec<2, T>
{
	union
	{
		struct { T x, y; };
		struct { T s, t; };
		struct { Swizzle<2, T, 0, 1, -1, -2> xy; };
	};

	Vec() :x(0), y(0) {}
	Vec(T _x, T _y) :x(_x), y(_y) {}

};


