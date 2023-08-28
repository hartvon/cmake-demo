set(PROJECT_NAME addtwo)

add_library(${PROJECT_NAME} SHARED add.c)
add_library(add::addtwo ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
  INTERFACE
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)
