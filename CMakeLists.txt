cmake_minimum_required(VERSION 3.26)
project(frage_interfaces)

set(CMAKE_CXX_STANDARD 17)

add_executable(frage_interfaces main.cpp
        IAuto.h
        Skoda.cpp
        Skoda.h
        Mercedes.cpp
        Mercedes.h
        Autohaendler.cpp
        Autohaendler.h)
