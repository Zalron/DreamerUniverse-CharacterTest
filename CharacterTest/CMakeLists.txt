cmake_minimum_required(VERSION 3.20)
project(CharacterTest)

set(CMAKE_CXX_STANDARD 14)

include_directories(CharacterTest)

add_executable(CharacterTest
        CharacterTest/Characters.cpp
        CharacterTest/Characters.h
        CharacterTest/flecs.c
        CharacterTest/flecs.h
        CharacterTest/Main.cpp
        CharacterTest/CharacterComponents.h)
