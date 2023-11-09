# Ray Tracing in One Weekend Project Documentation

## Introduction

"Ray Tracing in One Weekend" is a project designed to introduce users to the concepts of ray tracing, a technique for rendering images by simulating the physical behavior of light. Through this project, users will develop a path tracer capable of producing simple yet realistic 3D scenes.

## Project Goal

This project aims to guide users in creating a basic ray tracer that can render 3D scenes with lifelike lighting and shadows, providing an accessible entry point for those with foundational C++ knowledge and an interest in computer graphics.

## How Ray Tracing Works

Ray tracing generates an image by tracing the path of light as pixels in an image plane and simulating the effects as these rays encounter different objects. The project leverages this technique to calculate the color of pixels based on light interactions with scene objects.

## Components

### Vector Classes

- **Files**: `vec3.h`, `vec3.cpp`
- **Function**: Handle vector operations critical for ray tracing like addition, subtraction, and dot products.

### Ray Class

- **Files**: `ray.h`, `ray.cpp`
- **Function**: Represents rays with an origin and direction, computing points along the ray.

### Camera Class

- **Files**: `camera.h`, `camera.cpp`
- **Function**: Defines the viewer's perspective, including position and orientation.

### Material Classes

- **Files**: `material.h`, `material.cpp`
- **Function**: Describes surface interactions with light for different materials.

### Hittable Classes

- **Files**: `hittable.h`, `hittable_list.h`, `sphere.h`
- **Function**: Abstract and derived classes to define objects in the scene that rays can intersect.

## Building the Project

Ensure you have a C++11-supporting compiler and run the following in your terminal:

```bash
g++ -std=c++11 -O3 -o RayTracer src/*.cpp -I./include
```

## Running the Ray Tracer

After building the project, you can run the ray tracer using the following command:

```bash
./RayTracer
```
This will initiate the rendering process, and the output will be an image in the PPM format, located in the images/ directory.

## Extending the Project

This project can be extended in various ways to enhance its capabilities:

    Adding New Shapes: Implement additional geometric primitives to diversify the scenes that can be rendered.
    Complex Materials: Introduce new material types with different reflective or refractive properties.
    Performance Optimization: Improve the ray tracing algorithm for faster rendering times.

Feel free to fork the repository and experiment with these enhancements to contribute to the project's growth.

## Authors and Acknowledgment

Credit goes to Peter Shirley for authoring the foundational book "Ray Tracing in One Weekend," which inspired this project.
