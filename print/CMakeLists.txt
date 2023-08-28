set(PROJECT_NAME print)

add_library(${PROJECT_NAME} SHARED print.c)

target_link_libraries(${PROJECT_NAME}
  PUBLIC
    add::addtwo
)

target_include_directories(${PROJECT_NAME}
  PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)
