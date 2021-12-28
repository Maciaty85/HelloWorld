set(MODULE_NAME Bin)

message("src")

add_subdirectory(foo)
add_subdirectory(nana)

# add the executable
add_executable(
  ${MODULE_NAME} 
  main.cpp)

target_link_libraries(
    ${MODULE_NAME}
  PRIVATE 
    lib::foo
    lib::nana)

# add the binary tree to the search path for include files
target_include_directories(
    ${MODULE_NAME}  
  PUBLIC
    "${PROJECT_BINARY_DIR}"
)

set (CMAKE_CXX_FLAGS_INIT "-Wall -Wextra -g -std=c++1z")