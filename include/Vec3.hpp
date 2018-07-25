//
// Created by jiahan on 01/07/2018.
//

#pragma once

template <typename T>
struct Vec3
{
    using Type = Vec3<T>;

public:
    union {
        struct {T data[3];};
        struct {
            T x;
            T y;
            T z;
        };
        struct {T r, g, b};
    };

    inline Vec3<T>():x(T(0)), y(T(0), z(T(0))) { }
    inline Vec3<T>(const T& a, const T& b, const T& c): x(a), y(b), z(c) { }
    inline Vec3<T>(const Type& other) : x(other.x), y(other.y), z(other.z) {}

};