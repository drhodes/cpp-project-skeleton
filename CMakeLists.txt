# Which version of cmake to use? check the following:
# https://gist.github.com/mbinna/c61dbb39bca0e4fb7d1f73b0d66a4fd1

cmake_minimum_required(VERSION 3.4.0)
project(appname) # set the project name

add_definitions("-std=c++17")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake) # where is cmake_binary_dir?
conan_basic_setup() # what is a basic setup?


# APPLICATION BINARY -------------------------------------------------------------------------------

file(GLOB appname_SRC "./src/*.hh" "./src/*.cc")

add_executable(appexe ${appname_SRC})
target_link_libraries(appexe ${CONAN_LIBS}) # where is this defined?



# TEST BINARY --------------------------------------------------------------------------------------

file(GLOB test_SRC "./src/*.hh" "./src/*.cc" "./test/*.cc")

# don't include main from the application, else it will be defined
# twice because the test runner has a main function too.
list(FILTER test_SRC EXCLUDE REGEX ".*main.cc$")

add_executable(apptest ${test_SRC})
target_link_libraries(apptest ${CONAN_LIBS}) 



