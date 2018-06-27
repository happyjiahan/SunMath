project(SunMathTest)
set(CMAKE_CXX_STANDARD 11)

set(SRC_FILES catch.hpp
        test_main.cpp
        ../include/Vec2.hpp
        ../include/CommonMacro.h
        test_Vec2.cpp ../include/Swizzle.hpp test_Swizzle.cpp ../include/Vec.hpp ../include/countof.hpp test_countof.cpp)

add_executable(SunMathTest ${SRC_FILES})

#target_link_libraries(SunMathTest SunMath)
include_directories(../include)

