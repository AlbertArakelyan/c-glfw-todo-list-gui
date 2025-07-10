The `cglm` library brings **powerful OpenGL-style math utilities** to the C programming language — especially **linear algebra** operations used in graphics, game engines, and simulations.

---

### 🧠 What Does `cglm` Offer?

It’s basically a **pure C port of GLM (OpenGL Mathematics)**, which is popular in C++.

#### ✅ It provides:

* **Vectors**: `vec2`, `vec3`, `vec4` types and operations
* **Matrices**: `mat2`, `mat3`, `mat4` for transformations (rotation, translation, scaling)
* **Quaternions**: for smooth rotations
* **Projection utilities**: like `glm_perspective()`, `glm_ortho()`
* **LookAt camera transforms**: `glm_lookat()`
* **Transform pipelines**: model-view-projection matrices
* **Optimized SIMD math support** (when enabled)
* **Fast and clean API**, written with performance in mind

---

### 📦 What It's Useful For

If you're building:

* A **game** with OpenGL in C
* A **simulation engine**
* A **3D viewer**
* Anything requiring **matrix math**, physics, or graphics transformations

Then `cglm` is an *ideal companion*.

---

### 📌 Example Usage

```c
#include <cglm/cglm.h>

mat4 proj;
glm_perspective(glm_rad(45.0f), 800.0f/600.0f, 0.1f, 100.0f, proj);
```

Or for vector math:

```c
vec3 a = {1.0f, 2.0f, 3.0f};
vec3 b = {4.0f, 5.0f, 6.0f};
float dot = glm_vec3_dot(a, b);
```

---

### 🔧 Install It (Linux/macOS)

```bash
git clone https://github.com/recp/cglm
cd cglm
mkdir build && cd build
cmake ..
make
sudo make install
```
