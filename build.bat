mkdir build
cd build
cmake .. -G "Visual Studio 10"
cmake --build .
ctest .