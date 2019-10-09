cmake_minimum_required(VERSION 3.15)
project(cpp_basic)

set(CMAKE_CXX_STANDARD 14)

set(MAIN_FILES main.cpp) # solo cambiar el nombre del archivo que quieres ejecutar según el path en este caso main.cpp.
add_executable(other ${MAIN_FILES}) # se ejecutará el archivo que especificaste arriba.

set(FOR_FILES for_example/for_example.cpp) # solo cambiar el nombre del archivo que quieres ejecutar según el path en este caso for_example.cpp.
add_executable(for ${FOR_FILES}) # se ejecutará el archivo que especificaste arriba.

set(IF_FILES if_example/if_example.cpp) # solo cambiar el nombre del archivo que quieres ejecutar según el path en este caso if_example.cpp.
add_executable(if ${IF_FILES}) # se ejecutará el archivo que especificaste arriba.

set(VARIABLES_FILES variables_example/variables_example.cpp) # solo cambiar el nombre del archivo según el path en este caso variables_example.cpp.
add_executable(variables ${VARIABLES_FILES}) # se ejecutará el archivo que especificaste arriba.

set(ARRAY_FILES Array_Example/arrays.cpp)
add_executable(arrays ${ARRAY_FILES})
