cmake_minimum_required(VERSION 3.22)
project(blackjack)

set(CMAKE_CXX_STANDARD 14)

add_executable(blackjack main.cpp Cards.cpp Cards.h)
