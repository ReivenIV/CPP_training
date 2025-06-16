## What are Fixed-Point Numbers?

A **fixed-point number** is a way to represent numbers with a fractional part, but using only integers under the hood.  
Instead of using floating-point types (`float`, `double`), we use an integer to store the value, and we decide how many bits are for the fraction.

### Example

Suppose we want to store numbers with 2 decimal places.  
we can multiply every number by 100 and store it as an integer:

- `1.23` → store as `123`
- `4.56` → store as `456`

When we want the real value, divide by 100.

---

## Why Use Fixed-Point Numbers?

- **Performance:** On some hardware (like microcontrollers), integer math is much faster than floating-point math.
- **Precision:** we control exactly how much precision we want. No weird rounding errors like with floats.
- **Determinism:** Calculations are predictable and repeatable, which is important in games, finance, or embedded systems.

---

## How Does It Work in C++?

we usually create a class that :
- Stores an `int` as the value.
- Has a constant for the number of fractional bits (e.g., 8 bits for 256 steps).
- Converts between float/int and fixed-point automatically.

### Simple Example

````cpp
class Fixed {
    int value;
    static const int fracBits = 8; // 8 bits for fraction

public:
    Fixed() : value(0) {}
    Fixed(int n) : value(n << fracBits) {} // shift left to store int
    Fixed(float f) : value(static_cast<int>(roundf(f * (1 << fracBits)))) {}

    float toFloat() const { return value / float(1 << fracBits); }
    int toInt() const { return value >> fracBits; }
};
````
REMINDER : roundf is not allowed in exercice CPP02_ex01/3
---

## Good Practices

- **Choose the right number of fractional bits:** More bits = more precision, but smaller range.
- **Be careful with overflows:** Since we use integers, big numbers can overflow.
- **Conversion:** Always convert back to float or int when we need to display or use the value.
- **Operator Overloading:** Overload operators (`+`, `-`, `*`, `/`) for easy math.

---

## Why Not Just Use Float or Double?

- **Floats can be imprecise:** `0.1 + 0.2` is not exactly `0.3` in float.
- **Hardware limitations:** Some systems don’t have a floating-point unit.
- **Predictable rounding:** Fixed-point always rounds the same way.

---

## Extra Context

- **Used in games:** For physics or positions, to avoid floating-point errors.
- **Used in finance:** For money, where we need exact cents.
- **Embedded systems:** Where memory and CPU are limited.

---

## Summary

- **Fixed-point** is a way to store decimals using integers.
- It’s fast, precise, and predictable.
- Great for systems where floats are slow or imprecise.


--- 

## Extra References

In these module they share some refs to go deep in what are floats in tech. In case we want to go deeper we can check these articles :
1. https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point.html
2. https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html
3. https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_printing.html