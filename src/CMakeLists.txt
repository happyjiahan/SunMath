file(GLOB_RECURSE SRC_HEADER *.hpp)

add_library(SunMath INTERFACE) 
target_include_directories(SunMath  INTERFACE ./)
