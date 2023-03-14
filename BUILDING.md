0. Remove old build directory <!-- Optional ? -->
```rm -rf build```

1. Download and install dependencies
```conan install . --output-folder=build --build=missing```

2. Enter build directory
```cd build```

3. Initialize cmake <!-- ? -->
```cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release```

4. Build
```cmake --build .```
