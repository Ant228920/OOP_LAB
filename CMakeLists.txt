cmake_minimum_required(VERSION 3.26)
project(ooplab1)

set(CMAKE_CXX_STANDARD 17)

add_executable(ooplab1 main.cpp
        Animal.cpp
        Animal.h
        Owner.cpp
        Owner.h
        Company.cpp
        Company.h
        Employee.cpp
        Employee.h
        Features.cpp
        Features.h
        Abstract.cpp
        Abstract.h
        Interface.cpp
        Interface.h
        Functions.cpp
        Functions.h
        Client.cpp
        Client.h
)
