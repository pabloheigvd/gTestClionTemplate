# 'Google_test' is the subproject name
project(Google_tests)

# 'lib' is the folder with Google Test sources
# include all sources extracted from zip
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# declare relatives path to test files because
# relatives to projet
# =============================================================
### MODIFY
set(Person_lib_Tests_files
        "Person_lib/PersonTests.cpp")
set(All_Tests
        "${Person_lib_Tests_files}")

set(Sources
        "Person_lib/Person.cpp"
        "Person_lib/Person.h")
# =============================================================
list(TRANSFORM Sources PREPEND "../../sources/")

# test files to include
add_executable(all_tests_run
        ${All_Tests}
        ${Sources})

target_link_libraries(all_tests_run
        gtest
        gtest_main)