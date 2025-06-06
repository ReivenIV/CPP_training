### 1. **Difference between `delete[]` and `delete`**

- **`delete`** is used to free memory allocated for a **single object** created with `new`.
- **`delete[]`** is used to free memory allocated for an **array of objects** created with `new[]`.

#### **Example:**

```cpp
int* a = new int;      // allocate ONE int
delete a;              // correct

int* b = new int[10];  // allocate ARRAY of 10 ints
delete[] b;            // correct
```

**If we use `delete` instead of `delete[]` for arrays, only the first object is destroyed properly. The rest may not be cleaned up, which can cause memory leaks or bugs.**

---

### 2. **Difference between `Zombie* horde_alfa` and `Zombie each_zombie`**

- **`Zombie* horde_alfa`**:  
  This is a **pointer** to a Zombie object (or array of Zombies).  
  in the code, it points to the first element of an array of Zombies (the horde).

- **`Zombie each_zombie`**:  
  This is a **single Zombie object** (not a pointer, not an array).

#### **in the code:**

```cpp
Zombie *horde_alfa;      // pointer to Zombie (will point to an array)
Zombie each_zombie;      // a single Zombie object
```

---

### 3. **Is `horde_alfa` an array of each zombie?**

- **Yes!**  
  After this line:
  ```cpp
  horde_alfa = each_zombie.zombieHorde(amount_zombies_in_horde, "BoB");
  ```
  `horde_alfa` points to the first element of an array of Zombies (the horde).  
  we can access each Zombie in the horde with `horde_alfa[i]`.

---

### 4. **Good Practices**

- Always match `new` with `delete`, and `new[]` with `delete[]`.
- Using the wrong delete can cause memory leaks or undefined behavior.
- Prefer using smart pointers or containers (like `std::vector`) in modern C++ to avoid manual memory management.

---

### **Extra Context**

In C++98, manual memory management is common, but it’s easy to make mistakes.  
In modern C++, we use smart pointers and containers to avoid these issues.

---

#### **Summary Table**

| Allocation         | Deallocation | Example                |
|--------------------|--------------|------------------------|
| `new`              | `delete`     | `int* a = new int;`    |
| `new[]`            | `delete[]`   | `int* b = new int[10];`|

---

**In the code, `horde_alfa` is a pointer to the first Zombie in an array (the horde), and we must use `delete[]` to clean up.**  
`each_zombie` is just a single Zombie object, not related to the array.
