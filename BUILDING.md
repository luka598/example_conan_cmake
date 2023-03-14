0. Remove old build directory <!-- Optional ? -->
```rm -rf build```


1. Setup conan 
	1. Create conan profile
	```conan profile detect --name PROFILE_NAME```
	
	2. Change profile settings
	Edit file at ```conan profile path PROFILE_NAME```

	3. Download and install dependencies
	```conan install . --profile=PROFILE_NAME --output-folder=build --build=missing```


2. Enter build directory
```cd build```


3. Initialize cmake <!-- ? -->
```cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release```


4. Build
```cmake --build .```
