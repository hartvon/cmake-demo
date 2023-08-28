cmake_minimum_required(VERSION 3.12)

project(demo LANGUAGES C CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/bin")

add_executable(${PROJECT_NAME} demo.cc)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    add::addtwo
    print
)

add_subdirectory(add)
add_subdirectory(print)
