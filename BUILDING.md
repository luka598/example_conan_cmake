0. Remove old build directory
```rm -rf build```


1. Setup conan 
	1. Set up conan profile (optional)
		1. Create conan profile
		```conan profile detect --name PROFILE_NAME```
		
		2. Change profile settings
		Edit file at ```conan profile path PROFILE_NAME```

	2. Download and install dependencies
	```conan install . --profile=PROFILE_NAME --output-folder=build --build=missing```


2. Enter build directory
```cd build```


3. Initialize cmake <!-- ? -->
```cmake .. -DCMAKE_BUILD_TYPE=Release```


4. Build
```cmake --build .``` (or if using make ```make```).
