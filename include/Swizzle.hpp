//
// Created by jiahan on 24/06/2018.
//

#pragma once

#include <CommonMacro.h>
#include <iostream>

BEGIN_NS(SunMath)

template<typename T, int ... Indexes>
struct Swizzle
{
    float v[sizeof... (Indexes)];

public:
    T& operator=(const T& other)
    {
       int indexes[] = {Indexes...};
       for(int i = 0; i < sizeof...(Indexes); i++)
       {
           v[indexes[i]] = other[i];
       }
    }

    void test()
    {
        T t = T(v[Indexes]...);
        std::cout << t ;
    }
};


END_NS


