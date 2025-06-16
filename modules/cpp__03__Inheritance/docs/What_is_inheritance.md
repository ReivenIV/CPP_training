**Inheritance in C++98, in a few words:**

Inheritance lets we create a new class (child) based on an existing class (parent). The child class automatically gets the parent’s data and functions, and we can add or change things in the child.

**Deeper example:**

Suppose we have an `Animal` class with private data (number of legs, size, weight) and some functions. Then, we create `Dog` and `Cat` classes that inherit from `Animal` and add their own special functions.

### Animal class.hpp
````cpp
// Animal is the parent class
enum Size { XS, S, L, XL, XXL };

class Animal {
private:
    int legs;
    Size size;      // Enum Size only accepted inputs.
    float weight;

protected:
    // Protected function: only accessible by Animal and its children
    void rest(int minutes) { /* ... */ }
    void eatFood(std::string food) { /* ... */ }

public:
    Animal(int l, Size s, float w) : legs(l), size(s), weight(w) {}

    void walk(float distance) { /* ... */ }
    void run(float distance) { /* ... */ }
    void play(int time) { /* ... */ }

    int getLegs() const { return legs; }
    Size getSize() const { return size; }
    float getWeight() const { return weight; }
};
```

### Dog class.hpp
```cpp
class Dog : public Animal {
public:
    Dog(float s, float w) : Animal(4, s, w) {}

    void bark() { /* ... */ }

    void napAndEat(int time, std::string food) {
        rest(time);                             // OK: protected in parent
        eatFood(food);                          // OK: protected in parent
    }
};
```

### Cat class.hpp
```cpp
// Cat is another child class, inherits from Animal
class Cat : public Animal {
public:
    Cat(float s, float w) : Animal(4, s, w) {}

    void sleep(int hours) { /* ... */ }
    // Cat can also walk, run, play (from Animal)
};
````

### main.cpp exemple 
```cpp
int main() {
    Dog myDog(L, 25.0f); // Large dog, 25kg
    Cat myCat(S, 4.5f);  // Small cat, 4.5kg

    std::cout << "Dog:\n";
    myDog.walk(100);
    myDog.bark();
    myDog.play(30);
    myDog.napAndEat(30, "pizza");

    std::cout << "\nCat:\n";
    myCat.run(50);
    myCat.sleep(8);
    myCat.play(15);

    return (0);
}
```

Now, both `Dog` and `Cat` have all the data and functions from `Animal`, but each can have their own special behaviors.

**Why is inheritance important?**
- **Code reuse:** we don’t have to rewrite code for common features.
- **Organization:** It helps group related classes.
- **Polymorphism:** Lets we use parent pointers to work with different child types.

### **What are protected functions for?**

Protected functions (and variables) can be used by the base class (`Animal`) and any class that inherits from it (like `Dog` or `Cat`), but **not** from outside these classes.  
They are useful for:
- Sharing helper methods or data with child classes, but keeping them hidden from the outside world.
- Allowing derived classes to use or extend base class functionality safely.

For example, `rest()` and `eatFood()` might be used inside `Dog` or `Cat` to implement more complex behaviors, but we don't want regular code outside the class to call them directly.

### Who can use protected functions ? 
`protected` members (functions or variables) can **only** be accessed:

- Inside the base class itself (`Animal`)
- Inside any child (derived) class (`Dog`, `Cat`, etc.)—in their `.hpp` or `.cpp` files, in their member functions

They **cannot** be accessed from outside the class hierarchy (for example, in `main()` or any code that is not a member function of `Animal` or its children).
---

**Good practices:**
- Use inheritance for “is-a” relationships (e.g., Dog is an Animal).
- Prefer composition over inheritance if the relationship is not clear.
- Avoid deep inheritance trees (too many levels).
- Make base classes with virtual destructors if we plan to use polymorphism.

**Extra context:**
Inheritance is a key part of Object-Oriented Programming (OOP). It helps we build flexible and maintainable code, but overusing it can make code harder to understand. Use it thoughtfully!