# ✅ Week 3: Ray Tracing (Ch. 4–6.8), SYCL Basics & GPU Acceleration

---

## ✅ Goals for Week 3

1. **Complete Sections 4.1–6.8** of _Ray Tracing in One Weekend_.
2. **Understand SYCL fundamentals** using Intel’s DPC++ tutorial.
3. **Port the basic sphere renderer to SYCL** for GPU acceleration.

---

## 🛠️ Task Breakdown

### 1. Ray Tracing in One Weekend (Sections 4–6.8)

#### 📘 Sections Covered

- **Chapter 4**: Rays, a Simple Camera, and Background

  - 4.1 The `ray` Class
  - 4.2 Sending Rays Into the Scene

- **Chapter 5**: Adding a Sphere

  - 5.1 Ray-Sphere Intersection
  - 5.2 Creating Our First Raytraced Image

- **Chapter 6**: Surface Normals and Multiple Objects
  - 6.1 Shading with Surface Normals
  - 6.2 Simplifying the Ray-Sphere Intersection Code
  - 6.3 An Abstraction for Hittable Objects
  - 6.4 Front Faces vs. Back Faces
  - 6.5 A List of Hittable Objects
  - 6.6 Some New C++ Features
  - 6.7 Common Constants and Utility Functions

### 2. SYCL Fundamentals

#### 📚 References: DPC++ Tutorial

[Intel: Programming with Data Parallel C++](https://www.intel.com/content/www/us/en/developer/articles/training/programming-data-parallel-c.html)

#### 🎥 Video References (view only relevant parts)

- [Transitioning from CUDA to SYCL](https://www.youtube.com/watch?v=s_Q8gmexFH8)
- [SYCL Tutorial: Application Development with SYCL](https://www.youtube.com/watch?v=IeOnlBXTdn4)
- [Lecture 26: SYCL Mode (Intel GPU)](https://www.youtube.com/watch?v=7HqbuMBUV7A)
- [SYCL on CPU and GPU](https://www.youtube.com/watch?v=2U1xZW-VSeI)

> ⏩ Focus on: memory model, kernel launch, device selection, accessor usage.

#### 💡 Concepts Explored

- SYCL's queue, device, and buffer abstractions.
- Writing and launching kernels using `parallel_for`.
- Using `sycl::buffer` and `sycl::accessor` to manage memory.

---

### 3. Porting the Sphere Renderer to SYCL

#### 📚 Reference: Codeplay Blog

[Ray Tracing in SYCL – Sphere Image](https://codeplay.com/portal/blogs/2020/05/19/ray-tracing-in-a-weekend-with-sycl-basic-sphere-tracing)

#### 🔧 Tasks to be done

- Rewrite sphere intersection code to run inside a SYCL kernel.
- Use SYCL buffers to write output pixels in parallel.
- Generate `.ppm` image using SYCL device-side computation.

---
