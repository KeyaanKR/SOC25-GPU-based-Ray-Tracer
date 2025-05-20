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

## 📚 Resources

### 🧮 Vec3 & C++ Operator Overloading

- [Ray Tracing in One Weekend – Vec3 Chapter](https://raytracing.github.io/books/RayTracingInOneWeekend.html#vec3)
- [GeeksforGeeks – Operator Overloading in C++](https://www.geeksforgeeks.org/operator-overloading-c/)

### 🛠️ Makefile Basics

- [Make Tutorial](https://makefiletutorial.com/)
- [Makefile Tutorial for Beginners – YouTube (by Bro Code)](https://www.youtube.com/watch?v=_r7i5X0rXJk)
- [GNU Make Manual (Advanced Reference)](https://www.gnu.org/software/make/manual/make.html)

### 📐 Vector Math & Ray Tracing

- [Ray Tracing Math – YouTube (The Cherno)](https://www.youtube.com/watch?v=4NshnkzOdI0)
- [Ray Tracing Math – YouTube (UC Davis Academics)](https://www.youtube.com/watch?v=Ahp6LDQnK4Y)
