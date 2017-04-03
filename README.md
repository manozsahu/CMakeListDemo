# CMakeListDemo
mkdir build
cd build
cmake -DCMAKE_INSTALL_PREFIX:PATH=/tmp/foo ..
make && make test && make install
