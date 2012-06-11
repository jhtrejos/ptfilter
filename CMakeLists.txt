cmake_minimum_required (VERSION 2.8)

set(SORCES
  src/main.c
)

project (ptfilter C)
set(CMAKE_C_FLAGS "-g -Wall")
add_executable (ptfilter ${SORCES})
