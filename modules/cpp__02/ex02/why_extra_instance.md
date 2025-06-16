# Why the extra instance ??

Let’s clarify why it’s better to **create a new `Fixed` instance and do arithmetic on the internal `fixed_pt` value** instead of using `toFloat()` for arithmetic.


**In short:**  
Creating a new instance and doing arithmetic on `fixed_pt` is more precise, faster, and matches the intent of a fixed-point class.  
we only use `toFloat()` for output or explicit float conversion, not for internal math.

---

### Instead of doing : 
```c++
Fixed   Fixed::operator+(Fixed const& a) const{
    return (this->toFloat() + a.toFloat());
}
```

### we could do these : 
```c++
Fixed Fixed::operator+(Fixed const& a) const {
	Fixed res;
	res.setRawBits(this->fixed_point + a.fixed_point);
	return (res);
}
```

### Why not use `toFloat()` for arithmetic?

- **Precision loss:**  
  Converting to `float` and back can lose precision, especially for large or very small numbers, because `float` has limited precision compared to integer math.

- **Performance:**  
  Integer operations are generally faster than floating-point operations, especially for simple addition, subtraction, and bit-shifting.

- **Purpose of Fixed-point:**  
  The whole point of a fixed-point class is to do math using integer operations, not floating-point. Using `toFloat()` defeats this purpose.

---

### Why create a new instance in each operator?

- **Operator overloading convention:**  
  Arithmetic operators like `+`, `-`, `*`, `/` are expected to return a **new object** with the result, not modify the existing objects. This matches how built-in types work in C++.

- **Immutability:**  
  Returning a new instance ensures the original operands are not changed, which is safer and more predictable.

---

### Example: Addition

Suppose we have:
````cpp
Fixed a(2); // fixed_pt = 2 << bits
Fixed b(3); // fixed_pt = 3 << bits
Fixed c = a + b;
````

- If we use `toFloat()`, we convert both to `float`, add, then convert back to fixed-point. This can introduce rounding errors.
- If we add `fixed_pt` directly, we get the exact fixed-point sum.

---

### Summary Table

| Approach         | Precision | Performance | Matches Fixed-point Purpose |
|------------------|-----------|-------------|----------------------------|
| Use `toFloat()`  | Lower     | Slower      | No                         |
| Use `fixed_pt`   | Higher    | Faster      | Yes                        |

---

