cmake_minimum_required(VERSION 3.25 FATAL_ERROR)
include(CMakePrintHelpers)
include(FetchContent)

FetchContent_Declare(
  CMakeModules
  GIT_REPOSITORY "https://github.com/ZIMO-Elektronik/CMakeModules"
  GIT_TAG v0.9.3)
FetchContent_MakeAvailable(CMakeModules)

version_from_git()
project(OpenRemise VERSION ${VERSION_FROM_GIT})

add_subdirectory(docs)

file(DOWNLOAD
     "https://github.com/OpenRemise/.github/raw/master/data/.clang-format"
     ${CMAKE_CURRENT_LIST_DIR}/.clang-format)
file(GLOB_RECURSE SRC src/*.[ch]pp tests/*.[ch]pp)
add_clang_format_target(OpenRemiseFormat OPTIONS -i FILES ${SRC})
