cmake_minimum_required(VERSION 3.5)
project(Programetes_Contrassenya LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(contrassenya contrassenya.cpp)

# Provide a convenient target name for IDEs
set_target_properties(contrassenya PROPERTIES OUTPUT_NAME "contrassenya")
