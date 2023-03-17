cmake_minimum_required(VERSION 3.15)

project(04_homework LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(04_homework main.cpp lexer.cpp lexer.hpp parser.cpp parser.hpp number.hpp astnode.hpp astnode.cpp variable.hpp
    add.hpp sub.hpp div.hpp mul.hpp add.cpp div.cpp sub.cpp mul.cpp  )


if(CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR
  CMAKE_CXX_COMPILER_ID STREQUAL "GNU")

    target_compile_options(04_homework PRIVATE -Wall -Wextra -Werror -pedantic)

elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")

    target_compile_options(04_homework PRIVATE /EHsc /W4 /WX)

endif()
