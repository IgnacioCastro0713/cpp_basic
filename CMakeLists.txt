cmake_minimum_required(VERSION 3.15)
project(cpp_basic)

set(CMAKE_CXX_STANDARD 14)

set(MAIN_FILES main.cpp) # solo cambiar el nombre del archivo que quieres ejecutar por ejemplo.
add_executable(other ${MAIN_FILES}) # se ejecutará el archivo que especificaste arriba.

set(FOR_FILES for_example/for_example.cpp) # solo cambiar el nombre del archivo que quieres ejecutar por ejemplo.
add_executable(for ${FOR_FILES})

set(IF_FILES if_example/if_example.cpp) # solo cambiar el nombre del archivo que quieres ejecutar por ejemplo.
add_executable(if ${IF_FILES})

set(VARIABLES_FILES variables_example/variables_example.cpp) # solo cambiar el nombre del archivo que quieres ejecutar por ejemplo.
add_executable(variables ${VARIABLES_FILES})
