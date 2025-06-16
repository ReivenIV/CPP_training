# **Polymorphism in C++98 (Simple Explanation & Example)**

### What is Polymorphism?

Polymorphism means "many forms." In C++, it lets we use a single interface (like a function or class) to work with different types of objects. It’s a key part of Object-Oriented Programming.

### Why is it Important?

- **Flexibility:** we can write code that works with objects of different classes in a generic way.
- **Extensibility:** we can add new classes without changing existing code.
- **Reusability:** we can reuse code for different types of objects.

### How Does It Work?

Polymorphism in C++ is usually achieved with **inheritance** and **virtual functions**.

#### Example

Suppose we have a base class `Animal` and two derived classes: `Dog` and `Cat`.

````cpp
// Simple polymorphism example in C++98

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() { // virtual function
        cout << "Some animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() { // override
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() { // override
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    a1->speak(); // Output: Woof!
    a2->speak(); // Output: Meow!

    delete a1;
    delete a2;
    return 0;
}
````

**Explanation:**  
- `Animal` has a virtual function `speak()`.
- `Dog` and `Cat` override `speak()`.
- we can use an `Animal*` pointer to call the correct `speak()` for each object.

### Good Practices

- **Always use `virtual` for base class functions we want to override.**
- **If a class is meant to be a base class, add a `virtual` destructor** to avoid memory leaks.
- **Use pointers or references** to base class to achieve polymorphism.
- **Avoid object slicing:** If we assign a derived object to a base object (not a pointer/reference), we lose the derived part.

### Extra Context

- **Pure virtual functions** (`virtual void speak() = 0;`) make a class abstract (cannot be instantiated).
- **Polymorphism** is used in real-world code for things like GUI elements, game objects, or file handlers.

**Summary:**  
Polymorphism lets we write flexible and reusable code by treating different objects in a uniform way. Use virtual functions and inheritance, and remember to manage memory and use virtual destructors!