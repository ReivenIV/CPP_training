## 🧠 What is Polymorphism?

**Polymorphism** means **"many forms"**. In C++, it allows us to use **one interface** (like a pointer to a base class) to call different behaviors depending on the **real object type**.

we already saw an example with `virtual` — that’s **runtime polymorphism**!

---

## 🐶🐱 Example: Animals with different behaviors

We want to treat all animals the same way, but they **behave differently** when we call `makeSound()`.

---

### 🔧 Step 1: Base class with virtual function

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

---

### 🐶🐱 Step 2: Dog and Cat override it

```cpp
class Dog : public Animal {
public:
    void makeSound() {
        std::cout << "Woof!\n";
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        std::cout << "Meow!\n";
    }
};
```

---

### 💥 Step 3: Use polymorphism in action

```cpp
void hearAnimal(Animal* a) {
    a->makeSound();  // This is polymorphism!
}

int main() {
    Dog dog;
    Cat cat;

    hearAnimal(&dog); // Output: Woof!
    hearAnimal(&cat); // Output: Meow!

    return 0;
}
```

➡️ Even though the `hearAnimal()` function only knows it's dealing with an `Animal*`, the **correct version** of `makeSound()` is called!

That’s **polymorphism**:
**Same interface**, **different behavior**, depending on the real type (`Dog`, `Cat`, etc).

---

## 🧼 Why Is Polymorphism Important?

* It lets we write **flexible** and **reusable** code.
* we can treat different types **in the same way**.
* Used a lot in **game engines**, **GUIs**, and **frameworks**.

---

## 🧰 Good Practices

✅ Always use `virtual` functions in the base class if we want polymorphism.

✅ If our base class should never be used directly, make it **abstract**:

```cpp
class Animal {
public:
    virtual void makeSound() = 0;  // Pure virtual
};
```

---

## 🔄 Extra Example (Bonus)

```cpp
class Shape {
public:
    virtual void draw() { std::cout << "Drawing a shape\n"; }
};

class Circle : public Shape {
public:
    void draw() { std::cout << "Drawing a circle\n"; }
};

class Square : public Shape {
public:
    void draw() { std::cout << "Drawing a square\n"; }
};

void render(Shape* s) {
    s->draw();  // Works for any shape!
}
```

---

## 📌 In Short

| Term         | Meaning                                           |
| ------------ | ------------------------------------------------- |
| `virtual`    | Enables polymorphism in a function                |
| Polymorphism | One pointer → many behaviors depending on type    |
| Use case     | Write code that works with many types generically |

---