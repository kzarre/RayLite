# RayLite — Lightweight Ray Tracer in C++

![Demonstration of the materials](https://github.com/kzarre/RayLite/blob/main/screenshots/screenshot2.png)

**RayLite** is a minimal and efficient ray tracer written from scratch in C++. It implements fundamental ray tracing concepts including lighting, shading, and reflections, BVH with a focus on performance and clarity.

## Features

- Recursive ray tracing with reflection
- Shadows and diffuse lighting using anti aliasing
- Sphere rendering with simple material system
- Optimized for low memory usage and speed
- Outputs rendered image as a `.ppm` file 
- Implemented multiprocessing using openMP for faster rendering
- STL UI to visualize the rendered scene


## How to Run

### Prerequisites
- C++ compiler (e.g., `g++`)
- MSYS2 MSYS
- STL2

### Build and Execute

```bash
git clone https://github.com/kzarre/RayLite.git
cd RayLite
g++ -O2 -fopenmp main.cpp -o output.exe -I/mingw64/include -L/mingw64/lib -lmingw32 -lSDL2main -lSDL2 -Wl,--subsystem,console
output.exe
```

### Screenshots

![Demonstration of the final thing](https://github.com/kzarre/RayLite/blob/main/screenshots/screenshot1.png)

