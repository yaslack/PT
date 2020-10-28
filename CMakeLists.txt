cmake_minimum_required(VERSION 3.7.2)
project(Templier)

enable_testing()

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "-std=c99 -g -Wall")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH}/cmake)



add_executable(game_text game_text.c)
target_link_libraries(game_text game m)
add_library(game game.o game_aux.c)

add_test(test_ydridi_dummy ./game_test_ydridi dummy)
