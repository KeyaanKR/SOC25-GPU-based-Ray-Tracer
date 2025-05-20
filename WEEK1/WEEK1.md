## ✅ Goals for Week 1

1. **Implement a `Vec3` class**.
2. **Learn Makefile basics** to compile and manage builds efficiently.
3. **Understand the math behind ray tracing**: vectors, dot product, cross product, reflection, refraction.

---

## 🛠️ Task Breakdown

### 1. Implement a `Vec3` Class

Create a C++ class with the following:

- Constructor: `Vec3(float x, float y, float z)`
- Operator overloads: `+`, `-`, `*`, `/`, unary `-`, `[]`
- Methods:

  - `unit()`
  - `length()`
  - `dot(const Vec3& other)`
  - `cross(const Vec3& other)`

  ## do after learning the math

  - `reflect(const Vec3& normal)`
  - `refract(const Vec3& normal, float refractive_index)`

🧪 **Testing**

- Use the executable ./test to test your `Vec3` class and see whether the outputs are the same.

---

### 2. Makefile Basics

Write a `Makefile` that:

- Compiles your `vec3.cpp` and `main.cpp` into an executable.
- Has commands like:
  - `make`
  - `make clean`

---

### 3. Learn the Vector Math

Understand how vector math forms the foundation of ray tracing:

- How rays are defined
- How rays reflect and refract off surfaces
- Why normalization is important

📘 **Recommended Resource:**
