## 🌀 What is a Virtual Function?

A **virtual function** is a function we declare in a **base class**, but we want the **child class** to be able to **change** (override) its behavior.

It's like saying:

> “All animals can make a sound, but each animal makes a **different** sound.”

---

## 👇 Simple Example

### Step 1: Base class with `virtual`

```cpp
#include <iostream>
#include <string>

class Animal {
public:
    virtual void makeSound() {
        std::cout << "Some generic animal sound\n";
    }
};
```

Here, `makeSound()` is **virtual**. That means child classes can **override it**.

---

### Step 2: Child classes override `makeSound()`

```cpp
class Dog : public Animal {
public:
    void makeSound() {
        std::cout << "Woof! Woof!\n";
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        std::cout << "Meow~\n";
    }
};
```

---

### Step 3: Use virtual function with a pointer

```cpp
int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    a1->makeSound(); // Calls Dog's makeSound → "Woof! Woof!"
    a2->makeSound(); // Calls Cat's makeSound → "Meow~"

    delete a1;
    delete a2;
    return 0;
}
```

💡 Even though the **type of the pointer is `Animal*`**, the **correct function is called** at runtime thanks to `virtual`.

---

## 🧠 Why Use Virtual Functions?

* To let each child class give its **own version** of a function.
* To write **generic code** that works with different types.
* It enables **polymorphism** (one interface, many behaviors).

---

## 🔒 Without Virtual?

If we **remove `virtual`**, the output would be:

```bash
Some generic animal sound
Some generic animal sound
```

😞 It calls the base class version, not the real one.

---

## 🧼 Good Practices

1. Use `virtual` only if we **need** polymorphism.
2. When a base class should **always** be overridden, use:

```cpp
virtual void makeSound() = 0;  // pure virtual → makes the class abstract
```

Then, the class is abstract and **cannot be instantiated directly**.

---

## 🧩 Final Analogy

* `virtual` = "This function might change in future versions (child classes)"
* It’s like a **template** method in real life:
  *“This machine can make a drink… but child machines can choose coffee or tea.”*
