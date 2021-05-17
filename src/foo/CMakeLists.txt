set(MODULE_NAME foo)

set(INTERNAL_FILES
    foo.cpp
)

set(PUBLIC_HEADERS
    foo.hpp
)

add_subdirectory(bar)

add_library(
  ${MODULE_NAME}
  ${INTERNAL_FILES}
  ${PUBLIC_HEADERS}
)

target_include_directories(
  ${MODULE_NAME}
  PRIVATE 
    ${MODULE_NAME}
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}    
)
target_link_libraries(${MODULE_NAME}
  PRIVATE
    lib::bar
)

add_library(lib::${MODULE_NAME} ALIAS ${MODULE_NAME})

add_subdirectory(ut)