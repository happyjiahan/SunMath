//
// Created by jiahan on 23/06/2018.
//

#pragma once

#include "CommonMacro.h"
#include <cstddef>
#include <iostream>

BEGIN_NS(SunMath)

template <typename T>
struct Vec2
{
public:
    union {
        struct { T data[2]; };
        struct { T x, y; };
    };

    Vec2<T>(): x(T(0)), y(T(0)) {}
    Vec2<T>(const T& _x, const T& _y): x(_x), y(_y) {}
};

typedef Vec2<int> Vec2i;
typedef Vec2<float> Vec2f;




END_NS

