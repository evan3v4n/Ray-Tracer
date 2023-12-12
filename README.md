# Ray Tracer

## Overview

"Ray Tracing in One Weekend" is a foundational project in computer graphics, aimed at building a simple but powerful ray tracer from scratch. Ray tracing is a rendering technique that simulates the physical behavior of light to produce visually realistic images. This project serves as an entry point for understanding these concepts and creating a basic path tracer, a type of ray tracer that can generate lifelike images by simulating light paths.

## Project Structure

- `src/`: Contains all the source code written in C++.
- `images/`: Output directory for rendered images in PPM format.
- `images(jpg)/`: Images in .jpg format.

## Key Concepts

- **Ray Tracing**: The core algorithm simulates the paths that light takes from the eye to the virtual environment.
- **Scenes and Objects**: Utilizes geometric primitives (e.g., spheres) to construct a scene for rendering.
- **Materials**: Implements different material types to accurately portray how light interacts with surfaces.
- **Camera**: Models a virtual camera to capture the scene from a defined perspective.
- **Image Output**: Generates images in the PPM format, which is easy to understand and manipulate.

## Technologies

- **Language**: C++ (C++11 standard)
- **Libraries**: Standard Template Library (STL) for common data structures.

## Getting Started

To get started with this project, clone the repository and navigate to the project directory:

```bash
git clone [repository-url]
cd RayTracingInOneWeekend
```
Compile the project using a C++ compiler supporting the C++11 standard:
```
g++ -std=c++11 -O3 -o RayTracer main.cpp
```
Run the compiled executable to render an image:
```
On Mac / Linux
./RayTracer > image.ppm

On Windows
build\Release\RayTracer.exe > image.ppm
```

##Output
The program will output an image in the PPM format in the directory. This image can be viewed with any software that supports the PPM format, or converted to other formats using image processing tools.
