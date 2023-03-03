cmake_minimum_required(VERSION 3.5)

project(04_homework LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(04_homework main.cpp lexer.cpp lexer.hpp parser.cpp parser.hpp number.hpp astnode.hpp astnode.cpp variable.hpp
    add.hpp sub.hpp div.hpp mul.hpp add.cpp div.cpp sub.cpp mul.cpp )
