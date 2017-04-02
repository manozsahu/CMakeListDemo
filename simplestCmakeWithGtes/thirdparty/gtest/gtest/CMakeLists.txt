#cmakelist for gtest
file(GLOB_RECURSE CPPS "*.cc")
file(GLOB_RECURSE HPPS "*.h")

include_directories(include) #gtest/internal/custom/gtest.h: No such file
include_directories(./) # error: src/gtest.cc,gtest-internal-inl.h : No such file or directory

add_library(gtest ${CPPS} ${HPPS})

