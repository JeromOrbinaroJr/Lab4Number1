cmake_minimum_required(VERSION 3.10)
project(Lab4Number1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(MyExecutable Vehicle.h Car.h Bicycle.h Storage.h main.cpp Vehicle.cpp Car.cpp Bicycle.cpp Storage.cpp)