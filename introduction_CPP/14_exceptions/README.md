## ⚠️ Gotchas in C++98

* No `noexcept` or modern safety tools — you must be **extra careful**.
* If you `throw`, you must make sure any memory is cleaned (`delete`, etc.).
* Avoid throwing from a destructor, it's **dangerous** in C++98!

---

## 🎯 Summary

| Feature       | Description                                             |
| ------------- | ------------------------------------------------------- |
| What?         | A way to report and handle errors safely                |
| Keywords      | `try`, `throw`, `catch`                                 |
| Benefit       | Keeps code clean and strong                             |
| Best practice | Use for real errors, clean memory, catch specific types |
| Extra tip     | You can create your own error classes                   |

---
## 🚨 What is an "exception"?

An **exception** is a way to **handle errors** in a program **without crashing** it.

When something goes wrong (like dividing by zero or opening a file that doesn’t exist), your program can **“throw” an exception** — like saying “❗Something bad happened!” — and you can **catch** it and react properly.

---
## 🧱 Basic structure

In C++98, we use 3 main things:

* `try`: a block where we write code that **might fail**.
* `throw`: when something bad happens.
* `catch`: where we **handle the problem**.

---
### 📦 Simple Example

```cpp
#include <iostream>

int main() {
    try {
        int a = 10, b = 0;
        if (b == 0) {
            throw "Division by zero!";					// ❗ we throw a string
        }
        std::cout << a / b << std::endl;
    } catch (const char* msg) {
        std::cout << "Error: " << msg << std::endl;		// ✅ catch and handle
    }

    return (0);
}
```

📌 Output:
```
Error: Division by zero!
```

The program doesn't crash. We **handle** the error safely.
---

## 💡 Why are exceptions important?

1. ✅ **Cleaner code**: You don't need to check for errors after every line.
2. ✅ **Separation** of normal logic and error handling.
3. ✅ Helps you build **robust** (strong, safe) programs.

---
## ✅ Good practices

* **Use exceptions only for real errors**, not for regular logic.

  ❌ Bad:

  ```cpp
  throw 1;		// just to go to another part of code — not a good idea
  ```

* **Catch specific types** (like `const char*`, `std::exception`, etc.).

  ✅ Good:

  ```cpp
  catch (const std::exception& e) {
      std::cout << e.what() << std::endl;
  }
  ```

* **Always clean up** memory if you use `new` before throwing!

  ❗ Or use RAII (more on that later).

---
## 🤯 Advanced but useful: custom exception class

You can create your own type of error:

```cpp
#include <iostream>
#include <exception>

class MyError : public std::exception {
public:
    const char* what() const throw() {
        return "My custom error!";
    }
};

int main() {
    try {
        throw MyError();  // ❗ throw our own error
    } catch (const std::exception& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    return 0;
}
```

---

# Questions and Answers: 

---

### 🔹 **1. Is `throw` always a message (like a string)?**

**No!** You can `throw` **anything** — a string, a number, an object, or even a custom class.

#### ✅ Examples:

```cpp
throw "Something went wrong";   // a string (const char*)
throw 42;                       // an int
throw 3.14;                     // a float
throw std::runtime_error("Oops"); // an exception object
```

---

### 🔹 **2. Is `catch` always receiving a string (message)?**

**No!** `catch` must match **whatever type you threw**.

#### ✅ Examples:

```cpp
try {
    throw 42;
} catch (int number) {
    std::cout << "Caught number: " << number << std::endl;
}

try {
    throw "error";
} catch (const char* msg) {
    std::cout << "Caught string: " << msg << std::endl;
}
```

> So: **`catch` matches the type of `throw`.**

---

### 🔹 **3. Can `catch` call `free()` or clean memory?**

**Yes! Absolutely.**
Inside a `catch`, you can do **anything**: free memory, log errors, call functions, stop the program, etc.

#### ✅ Example:

```cpp
char* buffer = new char[100];
try {
    throw "error";
} catch (const char* msg) {
    delete[] buffer;  // clean memory manually
    std::cout << "Handled: " << msg << std::endl;
}
```

> ❗ C++98 has **no garbage collector**, so **you must clean up manually** with `delete` or `free()`.

---

### 🔹 **4. Is `try` a block that runs code and uses `throw` instead of `return` when there’s a problem?**

**Yes!** That's a good way to put it.

* Inside `try`, you run normal code.
* If something goes wrong, you `throw`.
* Then the program **jumps** to the right `catch`.

#### ✅ Example:

```cpp
try {
    int x = -1;
    if (x < 0) {
        throw "Negative number not allowed!";
    }
} catch (const char* msg) {
    std::cout << "Caught error: " << msg << std::endl;
}
```

---

### 🔹 **5. What is `e` in `catch (std::exception& e)`?**

`e` is just a **variable name**.
Yes, it’s like a normal variable, but it **holds the error object**.

If you throw an exception object like this:

```cpp
throw std::runtime_error("Something broke");
```

You catch it like this:

```cpp
catch (const std::exception& e) {
    std::cout << e.what();  // use e like a normal object
}
```

* `e` is an object (or reference) of type `std::exception`.
* You can call functions on it (like `e.what()`).

---

### 🧠 Summary

| Concept  | Simple Explanation                                           |
| -------- | ------------------------------------------------------------ |
| `try`    | Runs code; if there's a problem, jump to `catch`             |
| `throw`  | Can throw anything: string, int, object                      |
| `e`      | Just a variable name for the caught error (can be an object) |
| `catch`  | Must match the type of what you threw                        |
| Clean-up | You can free memory or do cleanup in `catch`                 |


### 🔹 **6. *Does try need to trow always the same datatype ?**

-  is it possible inside one single try to thow different datatypes like strings, objects, arrrys or is necesary that the try always throw the same datatypes ?

> ✅ **Yes**, inside a single `try` block, you can `throw` **different data types** — like strings, objects, integers, arrays, etc.

But! 👉 Each different type must have its **own `catch` block** to handle it properly.

---

### 🧪 Example: Throwing different types

```cpp
#include <iostream>
#include <exception>

int main() {
    try {
        int errorType = 2;

        if (errorType == 1) throw "String error";
        if (errorType == 2) throw 404;
        if (errorType == 3) throw std::exception();
    }
    catch (const char* msg) {
        std::cout << "Caught string: " << msg << std::endl;
    }
    catch (int code) {
        std::cout << "Caught int: " << code << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Caught std::exception" << std::endl;
    }

    return 0;
}
```

🔸 Output:

```
Caught int: 404
```

---

### 🧠 What’s happening?

* Inside `try`, you can `throw` anything.
* The program will jump to the first matching `catch` block.
* If no `catch` matches the type, the program will crash with a message like "terminate called after throwing..."

---

### ⚠️ What if no catch matches?

```cpp
try {
    throw 3.14;  // double
}
catch (int x) {
    std::cout << "Caught int" << std::endl;
}
```

💥 This will crash, because there’s no `catch(double)` or `catch(...)`.

---

### 🧯 Catching anything (optional)

You can use this to catch **anything**:

```cpp
catch (...) {
    std::cout << "Caught unknown type!" << std::endl;
}
```

> Good for last-resort safety.

---

### 🧷 Summary

\| Can I throw multiple types in 1 try? | ✅ Yes |
\| Must I catch each one? | ✅ Yes, if you want to handle them properly |
\| Can I catch “anything”? | ✅ Yes, with `catch (...)` |
\| Good practice? | ✅ Catch specific types first, then use `...` at the end if needed |

