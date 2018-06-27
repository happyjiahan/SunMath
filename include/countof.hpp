//
// Created by jiahan on 27/06/2018.
//

#pragma once

#include <CommonMacro.h>
#include <cstddef>

BEGIN_NS(SunMath)

template<typename T, int SIZE>
constexpr size_t
countof(T(& array)[SIZE])
{
    return SIZE;
}

template<typename T, int ROW_SIZE, int COL_SIZE>
constexpr size_t
countof(T(& array)[ROW_SIZE][COL_SIZE])
{
    return ROW_SIZE * COL_SIZE;
}


END_NS

