message("ut")

set(MODULE_NAME ut)


enable_testing()

include_directories(${CMAKE_SOURCE_DIR}/src/foo)

set(TEST_SOURCES 
    Test_foo.cpp)

add_executable(${MODULE_NAME} ${TEST_SOURCES})
target_link_libraries(${MODULE_NAME} 
    PUBLIC 
        gtest_main
        lib::foo
)

add_test(
    NAME ${MODULE_NAME}
    COMMAND ${MODULE_NAME}
)