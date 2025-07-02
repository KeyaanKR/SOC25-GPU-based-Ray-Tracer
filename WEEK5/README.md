# ✅ Week 5: Antialiasing, Materials & Realistic Rendering in SYCL

---

## ✅ Goals for Week 5

1. **Complete Chapters 7–11.5** of _Ray Tracing in One Weekend_.
2. **Implement advanced features** like antialiasing, diffuse and reflective materials, and dielectrics.
3. **Extend the SYCL-based renderer** with pixel sampling and material tracing (for those on GPU track).

---

## 🧱 Task Breakdown

### 1. 📘 Ray Tracing in One Weekend (Chapters 7–11.5)

#### ✅ Topics to Cover

- **Chapter 7**: Moving Camera Code Into Its Own Class

- **Chapter 8**: Antialiasing

  - 8.1 Some Random Number Utilities
  - 8.2 Generating Pixels with Multiple Samples

- **Chapter 9**: Diffuse Materials

  - 9.1 A Simple Diffuse Material
  - 9.2 Limiting the Number of Child Rays
  - 9.3 Fixing Shadow Acne
  - 9.4 True Lambertian Reflection
  - 9.5 Gamma Correction for Accurate Color Intensity

- **Chapter 10**: Metal

  - 10.1 Abstract Class for Materials
  - 10.2 Data Structure for Intersections
  - 10.3 Scatter and Reflectance
  - 10.4 Mirrored Reflection
  - 10.5 Metal Sphere Scene
  - 10.6 Fuzzy Reflection

- **Chapter 11**: Dielectrics
  - 11.1 Refraction
  - 11.2 Snell’s Law
  - 11.3 Total Internal Reflection
  - 11.4 Schlick Approximation
  - 11.5 Hollow Glass Sphere

---

### 2. ⚡ SYCL GPU Extension (Optional for GPU Track)

#### 📚 Reference: [Codeplay Part 2 – Pixel Sampling & Material Tracing](https://www.codeplay.com/portal/blogs/2020/06/19/ray-tracing-in-a-weekend-with-sycl-part-2-pixel-sampling-and-material-tracing.html)

> If you have already ported the basic sphere renderer to SYCL (Week 3), extend it with the following features:

#### 🔧 Tasks

- Implement **multiple-sample antialiasing** in SYCL kernels.
- Add **diffuse reflection** and **Lambertian scatter** to the SYCL scene.
- Implement **metallic** and **dielectric** materials in SYCL using appropriate material structs and scatter logic.
- Apply **gamma correction** and output `.ppm` image from the GPU.

---

## ✅ Deliverables

- [ ] Ray tracer with antialiasing and materials (CPU)
- [ ] (Optional) Extended SYCL renderer with sampling and materials
- [ ] Generated `.ppm` output images
- [ ] (Optional) Side-by-side comparison of CPU vs GPU renders
