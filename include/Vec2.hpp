//
// Created by jiahan on 23/06/2018.
//

#pragma once

#include <CommonMacro.h>
#include <cstddef>
#include <iostream>
#include "countof.hpp"

BEGIN_NS(SunMath)

template<typename T>
struct Vec2
{
public:
    union {
        struct {T data[2];};
        struct {T x, y;};
        struct {T u, v;};
    };

    using Type = Vec2<T>;

    inline Vec2<T>(): x(T(0)), y(T(0)) {}
    inline Vec2<T>(const T& _x, const T& _y): x(_x), y(_y) {}

    inline Vec2<T>(const Type& other)
    {
        Set(other);
    }

    inline const Type& operator=(const Type& other)
    {
        Set(other);
    }

    friend inline Type operator+(const Type& v1, const Type& v2)
    {
        Type result;
        Add(result, v1, v2);
        return result;
    }

    friend inline Type& operator-=(Type& v1, const Type& v2)
    {
        Subtract(v1, v1, v2);
        return v1;
    }

    friend inline Type& operator+=(Type& v1, const Type& v2)
    {
        Add(v1, v1, v2);
        return v1;
    }


    friend inline Type operator-(const Type& v1, const Type& v2)
    {
        Type result;
        Subtract(result, v1, v2);
        return result;
    }

    inline void Set(const Type& other)
    {
        memcpy(this->data, other.data, countof(other.data) * sizeof(T));
    }

    friend inline void Subtract(Type& result, const Type& v1, const Type& v2)
    {
        result.x = v1.x - v2.x;
        result.y = v1.y - v2.y;
    }

    friend inline void Add(Type& result, const Type& v1, const Type& v2)
    {
        result.x = v1.x + v2.x;
        result.y = v1.y + v2.y;
    }


};

typedef Vec2<int> Vec2i;
typedef Vec2<float> Vec2f;


END_NS

