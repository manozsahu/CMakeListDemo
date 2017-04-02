file(GLOB CPPS *.cpp)
file(GLOB HPPS ../include/*.h ../include/*.hpp)

find_package(Threads)

include_directories(../gtest/gtest/include)
#link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

add_executable(mytest ${CPPS} ${HPPS})

target_link_libraries(mytest mylib gtest  ${CMAKE_THREAD_LIBS_INIT})
