# BSP last if statement ? 
---

**In short:**  
- All areas positive = point is strictly inside  
- Any area zero or negative = point is on edge or outside

---
## What Does This Code Do?

```cpp
if ((ABC > 0) && (PBC > 0) && (APC > 0) && (ABP > 0))
    return true;
else
    return false;
```

This checks if a point is **strictly inside** a triangle.

---

## How Does It Work?

- **ABC** is the area of the main triangle.
- **PBC, APC, ABP** are the areas of the triangles formed by the point and two triangle corners.
- If **all areas are positive**, the point is inside the triangle.
- If **any area is zero or negative**, the point is on the edge or outside.

---

## Why Positive?

- **Positive area** means the points are in the same order (all counterclockwise or all clockwise).
- If the point is on the edge, one area is **zero**.
- If the point is outside, at least one area is **negative**.

---

## Example

Let’s say we have a triangle with points A, B, C:

- A(0, 0)
- B(4, 0)
- C(0, 4)

### 1. Point Inside

Point P(1, 1):

| Area   | Value | Positive? |
|--------|-------|-----------|
| ABC    | 8     | Yes       |
| PBC    | 6     | Yes       |
| APC    | 1     | Yes       |
| ABP    | 1     | Yes       |

**Result:** All positive → `true` (inside)

---

### 2. Point On Edge

Point P(2, 0):

| Area   | Value | Positive? |
|--------|-------|-----------|
| ABC    | 8     | Yes       |
| PBC    | 0     | No        |
| APC    | 4     | Yes       |
| ABP    | 4     | Yes       |

**Result:** One is zero → `false` (on edge)

---

### 3. Point Outside

Point P(5, 5):

| Area   | Value | Positive? |
|--------|-------|-----------|
| ABC    | 8     | Yes       |
| PBC    | -8    | No        |
| APC    | 13    | Yes       |
| ABP    | 3     | Yes       |

**Result:** One is negative → `false` (outside)

---

## Summary Table

| Point Location      | All Areas Positive? | Result |
|---------------------|--------------------|--------|
| Strictly inside     | Yes                | true   |
| On edge or vertex   | No (one or more 0) | false  |
| Outside             | No (one or more <0)| false  |

---
