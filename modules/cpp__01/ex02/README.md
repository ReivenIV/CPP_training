## **What is a Reference?**

A **reference** in C++ is an **alias** for another variable.  
It’s like giving a second name to the same memory location.

```cpp
std::string str = "HI THIS IS BRAIN";
std::string &stringREF = str;
```
- `stringREF` is a reference to `str`.
- Any change to `stringREF` will affect `str` (and vice versa).
- A reference **must be initialized** when declared and **cannot be changed** to refer to another variable later.

---

## **In the code**

```cpp
std::string str = "HI THIS IS BRAIN";
std::string *stringPTR = &str;    // pointer to str
std::string &stringREF = str;     // reference to str
```

- `stringPTR` is a **pointer** (can point to different strings).
- `stringREF` is a **reference** (always refers to `str`).

### **Printing Addresses**

```cpp
std::cout << &str << std::endl;        // address of str
std::cout << stringPTR << std::endl;   // value of pointer (address of str)
std::cout << &stringREF << std::endl;  // address of reference (same as str)
```
All three lines print the **same address** because `str` and `stringREF` are the same variable in memory.

### **Printing Values**

```cpp
std::cout << *stringPTR << std::endl;  // value pointed to by pointer
std::cout << stringREF << std::endl;   // value referred to by reference
```
Both print the **value** of `str`.

---

## **Things to Know About References**

- **Must be initialized** when declared.
- **Cannot be null** (unlike pointers).
- **Cannot be reseated** (can’t make it refer to something else later).
- Useful for function parameters to avoid copying large objects.
- Safer and easier to use than pointers for many cases.

---

### **Summary Table**

| Feature         | Reference           | Pointer                |
|-----------------|---------------------|------------------------|
| Can be null?    | No                  | Yes                    |
| Must initialize | Yes                 | No                     |
| Can change target? | No               | Yes                    |
| Syntax          | `Type &ref = var;`  | `Type *ptr = &var;`    |

---

**In the code, `stringREF` is just another name for `str`. Any operation on `stringREF` is really done on `str`.**
