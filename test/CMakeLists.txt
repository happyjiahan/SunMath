file(GLOB_RECURSE CASE_SOURCE case/*.cpp)
message('CASE_SOURCE = ' ${CASE_SOURCE})

add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE lib)

include_directories(lib ../src/)

add_executable(MathTest ${CASE_SOURCE})
target_link_libraries(MathTest Catch)

enable_testing()
add_test(UnitTest MathTest)