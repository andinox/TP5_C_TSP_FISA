cmake_minimum_required(VERSION 3.30)
project(t5c C)

set(CMAKE_C_STANDARD 11)

add_executable(exo1 "Exercice 1/main.c" "Exercice 1/operation/operation.c")

add_executable(exo2
        "Exercice 2/list/list.c"
        "Exercice 2/main.c")

add_executable(bonus
        "Exercice Bonus/tri_tabs.c")