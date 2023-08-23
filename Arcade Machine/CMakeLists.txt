cmake_minimum_required(VERSION 3.25)
project(Arcade_Machine C)

set(CMAKE_C_STANDARD 23)

add_executable(Arcade_Machine main.c rock_paper_scissors.h rock_paper_scissors.c number_guessing_game.h number_guessing_game.c math_quiz.h math_quiz.c)
