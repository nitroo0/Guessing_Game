cmake_minimum_required(VERSION 4.2)
project(Guessing_Game)

set(CMAKE_CXX_STANDARD 20)

add_executable(Guessing_Game main.cpp
        numbergame.cpp
        numbergame.h
        wordgame.cpp
        wordgame.h)
