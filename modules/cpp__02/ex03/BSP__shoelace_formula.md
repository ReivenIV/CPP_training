# Shoelace formula

---

#### Summary:
The shoelace formula is a simple, powerful tool for area calculation using coordinates. Always use floating-point arithmetic, watch out for point order, and encapsulate wer logic for clarity and reuse!
---

## What is the Shoelace Formula?

The **shoelace formula** is a mathematical way to find the area of a polygon (like a triangle) when we know the coordinates of its corners (vertices). For a triangle with points **A(x₁, y₁)**, **B(x₂, y₂)**, and **C(x₃, y₃)**, the area is:


**Area = 1/2 * | x₁(y₂ - y₃) + x₂(y₃ - y₁) + x₃(y₁ - y₂) |**


It’s called the “shoelace” formula because, when we write the numbers in a certain way, the multiplications look like laces crossing over each other.

---

## Simple Example

Suppose we have a triangle with these points:
- A(1, 2)
- B(4, 5)
- C(6, 3)

Plug them into the formula:

```
Area = 1/2 * | 1*(5-3) + 4*(3-2) + 6*(2-5) |
     = 1/2 * | 1*2 + 4*1 + 6*(-3) |
     = 1/2 * | 2 + 4 - 18 |
     = 1/2 * | -12 |
     = 1/2 * 12
     = 6
```

So, the area is **6**.

---

## Why is it Important?

- **Efficiency:** It’s a quick way to calculate the area using only the coordinates.
- **No need for side lengths:** we don’t need to calculate distances or angles.
- **Used in graphics and geometry:** It’s common in computer graphics, games, and geometry problems.

---

## Good Practices

1. **Order of Points:** The formula works for any order, but the sign (positive/negative) tells we the orientation (clockwise or counterclockwise). Use the absolute value to always get a positive area.
2. **Avoid Integer Division:** If we use integers, `1/2` will be zero! Use `0.5` or cast to float/double.
3. **Check for Degenerate Triangles:** If the area is zero, the points are in a straight line (not a triangle).
4. **Use Functions:** Encapsulate the formula in a function for reuse and clarity.

---

## C++98 Example

```cpp
#include <iostream>
#include <cmath>

float triangleArea(float x1, float y1, float x2, float y2, float x3, float y3) {
    float area = 0.5f * std::fabs(
        x1 * (y2 - y3) +
        x2 * (y3 - y1) +
        x3 * (y1 - y2)
    );
    return area;
}

int main() {
    std::cout << triangleArea(1, 2, 4, 5, 6, 3) << std::endl; // Output: 6
    return 0;
}
```

---

## Extra Context

- The shoelace formula generalizes to any polygon, not just triangles.
- It’s widely used in computational geometry, GIS, and computer graphics.
- In wer code, we use it to check if a point is inside a triangle by comparing areas—this is a common and robust technique.

---
