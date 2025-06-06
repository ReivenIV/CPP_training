Sure! Let’s clarify the difference between **stack** and **heap** in C++ with simple words and examples.

---

## What is the **stack**?

- The **stack** is a special area of memory where your program stores local variables and function calls.
- When you create a variable like `int x = 5;` or `Zombie z("foo");` inside a function, it’s stored on the stack.
- **Stack memory** is managed automatically: when the variable goes out of scope (the function ends), it is destroyed.

**Example:**
```cpp
void foo() {
    Zombie z("Stack Zombie"); // Created on the stack
    // z exists only inside foo()
} // z is destroyed here, automatically
```

---

## What is the **heap**?

- The **heap** is a larger pool of memory used for dynamic allocation.
- When you use `new` (e.g., `Zombie* z = new Zombie("Heap Zombie");`), the object is created on the heap.
- **Heap memory** is managed manually: you must use `delete` to free it, or you’ll get a memory leak.

**Example:**
```cpp
void bar() {
    Zombie* z = new Zombie("Heap Zombie"); // Created on the heap
    // z exists until you delete it
    delete z; // You must delete it manually!
}
```

---

## Key Differences

| Stack                        | Heap                        |
|------------------------------|-----------------------------|
| Fast, automatic allocation   | Slower, manual allocation   |
| Limited size                 | Much larger                 |
| Variables destroyed automatically | Must delete manually      |
| Good for small, short-lived objects | Good for large or long-lived objects |

---

## Why does it matter?

- **Forgetting to delete heap objects** causes memory leaks.
- **Deleting twice** or using deleted memory causes bugs (undefined behavior).
- **Stack is safer and faster** for most cases.
- Use the heap only when you need objects to outlive the current scope or need large memory.

---

## Good Practices

- Prefer stack allocation when possible.
- If you use `new`, always use `delete` (or better, use smart pointers like `std::unique_ptr`).
- Avoid raw pointers unless necessary.

---

## Extra Context

- Modern C++ encourages using **smart pointers** (`std::unique_ptr`, `std::shared_ptr`) to manage heap memory safely. REMINDER: not suported in C++98
- Stack memory is limited (often a few MB), so don’t put huge arrays or objects there.

---

**Summary:**  
- **Stack:** automatic, fast, safe, short-lived.
- **Heap:** manual, flexible, must manage memory yourself.
