cmake_minimum_required(VERSION 3.15)
project(cpp_basic)

set(CMAKE_CXX_STANDARD 14)

set(01 01_HelloWord/helloword.cpp) # solo cambiar el nombre del archivo que quieres ejecutar según el path.
add_executable(01 ${01}) # se ejecutará el archivo que especificaste arriba.

set(02 02_TypeData/variables_example.cpp) # solo cambiar el nombre del archivo según el path en este caso 02_TypeData.cpp.
add_executable(02 ${02}) # se ejecutará el archivo que especificaste arriba.

set(03 03_IfAndElse/if_example.cpp) # solo cambiar el nombre del archivo que quieres ejecutar según el path en este caso 03_IfAndElse.cpp.
add_executable(03 ${03}) # se ejecutará el archivo que especificaste arriba.

set(04 04_For/for_example.cpp) # solo cambiar el nombre del archivo que quieres ejecutar según el path en este caso 04_For.cpp.
add_executable(04 ${04}) # se ejecutará el archivo que especificaste arriba.

set(05 05_Arrays/arrays.cpp)
add_executable(05 ${05})

set(06 06_Functions/function_example.cpp)
add_executable(06 ${06})

set(07 07_Headers/headers.cpp)
add_executable(07 ${07})

set(08 08_InputOfData/inputofdata.cpp)
add_executable(08 ${08})

set(09 09_Switch/switch.cpp)
add_executable(09 ${09})

set(10 10_DoWhile/dowhile.cpp)
add_executable(10 ${10})

set(11 11_ClassesAndObjects/classandobject_example.cpp)
add_executable(11 ${11})

