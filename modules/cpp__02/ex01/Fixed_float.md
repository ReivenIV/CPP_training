## Explanation of Construct Fixed with float case
```cpp
Fixed::Fixed(const float n) {
	std::cout << "float constructor activated" << std::endl;
	float scaled = n * (1 << this->bits); // scaled = n * 256
	this->fixed_point = (int)(scaled + (scaled >= 0 ? 0.5f : -0.5f)); // rounding
}
```

---

### What happens here?

#### 1. **Multiply the float by 256**
- `this->bits` is usually 8, so `1 << 8` = 256.
- This shifts the decimal part into the integer part.

#### 2. **Round to nearest integer**
- Adds `0.5` (if positive) or `-0.5` (if negative) to round the value before converting to `int`.

#### 3. **Store as integer**
- The result is stored in `this->fixed_point`.

---

### Example 1: Positive float

Suppose we create a Fixed object with `3.14f`:

```cpp
Fixed a(3.14f);
```

- Step 1: `scaled = 3.14 * 256 = 803.84`
- Step 2: Since 803.84 is positive, add 0.5: `803.84 + 0.5 = 804.34`
- Step 3: Convert to int: `fixed_point = 804`

So, **3.14 is stored as 804** in fixed-point format.

---

### Example 2: Negative float

Suppose we create a Fixed object with `-2.75f`:

```cpp
Fixed b(-2.75f);
```

- Step 1: `scaled = -2.75 * 256 = -704.0`
- Step 2: Since -704.0 is negative, add -0.5: `-704.0 + (-0.5) = -704.5`
- Step 3: Convert to int: `fixed_point = -704`

So, **-2.75 is stored as -704** in fixed-point format.

---

### Why do this?
- This allows we to store decimal numbers using only integers, which is useful for systems where floating-point math is slow or unavailable.

---

**Summary:**  
- Multiply the float by 256 (for 8 bits).
- Round to the nearest integer.
- Store the result as an integer (`fixed_point`).  
- This integer can later be converted back to the original float using division.
