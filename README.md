# How to compile

Project is compiled used CMake. To compile the program yourself, make sure you
have the latest version of CMake installed:

```
cmake --version
```

If your version number is anything less than: 2.8.12.2, get the latest version.
In addition, if you don't have it installed in the first place, use the same
command:

```
sudo apt install cmake
```

## Building The Project

Make a build directory, and then run cmake in it:

```
cd build
cmake ..
```

From here on out, you can make the program with:

```
make
```

To run the program, cd into the bin folder, and run hello_world.

