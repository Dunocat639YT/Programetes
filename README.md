# Programetes

This repository contains small example programs in C, C++ and Python. This README adds build and run instructions for the C++ `contrassenya.cpp` program (a small educational password "cracker" demo).

Build and run (Linux)

- Using g++ directly:

```bash
g++ -std=c++17 -O2 -o contrassenya C++/contrassenya.cpp
./contrassenya
```

- Using CMake:

```bash
mkdir -p C++/build && cd C++/build
cmake ..
cmake --build .
./contrassenya
```

Build and run (Windows with MinGW)

- Using g++ (MinGW) in Git Bash or MSYS2 shell:

```bash
g++ -std=c++17 -O2 -o contrassenya.exe C++/contrassenya.cpp
./contrassenya.exe
```

- Using CMake (MinGW Makefiles or MSYS2):

```bash
mkdir C:\path\to\repo\C++\build
cd C:\path\to\repo\C++\build
cmake -G "MinGW Makefiles" ..
cmake --build .
contrassenya.exe
```

Notes

- The program is educational and demonstrates why strong passwords are important. Don't use it against systems you don't own or have permission to test.
- On large password lengths the brute force search may take a very long time; the program limits length to reduce runtime.
