cmake_minimum_required(VERSION 3.16)
project("text_quest")

file(GLOB QUEST_SRC "src/*")

add_executable(text_quest ${QUEST_SRC})

target_include_directories(text_quest PRIVATE "include")