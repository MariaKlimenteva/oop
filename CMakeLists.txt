project("text_quest")

file(GLOB QUEST_SRC "text_quest/src/*")

add_executable(text_quest ${QUEST_SRC})

target_include_directories(text_quest PRIVATE "text_quest/include")