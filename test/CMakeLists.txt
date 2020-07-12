cmake_minimum_required(VERSION 3.10.0)

set(This Test)

set(Sources
    test.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC gtest_main gtest_example )


add_test(
    NAME ${This}
    COMMAND ${This}
)

