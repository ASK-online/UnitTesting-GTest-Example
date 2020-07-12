cmake_minimum_required(VERSION 3.10.0)

project(gtest_example)


set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)


enable_testing()

add_subdirectory(googletest)


set(Sources
    main.cpp
)
set(Headers
    main.hpp
)


add_library(${CMAKE_PROJECT_NAME} STATIC ${Sources} ${Headers})

add_subdirectory(test)
