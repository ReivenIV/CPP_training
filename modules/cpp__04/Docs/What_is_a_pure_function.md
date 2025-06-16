# Pure Virtual Function

A **pure virtual function** is a function in a base class that has no code (no body).  
It is declared with `= 0`.  
It tells C++: “Every class that inherits from me must write its own version of this function.”

**Example:**

````cpp
class Animal {
public:
    virtual void makeSound() = 0; // Pure virtual function
};
````

- we **cannot** create an object of `Animal` because it has a pure virtual function.
- Any class that inherits from `Animal` **must** write its own `makeSound()`.

---

## Interface

In C++98, an **interface** is a class that only has pure virtual functions (and usually no data members).  
It defines a set of actions that any derived class must provide.

**Example:**

````cpp
class Drawable {
public:
    virtual void draw() = 0; // Pure virtual function
};
````

- Any class that inherits from `Drawable` must write its own `draw()` function.
- This is how we make sure all “Drawable” things can be drawn.

---

## Why Are They Important?

- **Enforce rules:** They make sure all derived classes implement certain functions.
- **Polymorphism:** we can use pointers or references to the base class to work with different derived classes in a generic way.
- **Design:** They help we design flexible and reusable code.

---

## Good Practices

- Use interfaces to define what actions a group of classes must support.
- Use pure virtual functions when we want to force subclasses to implement them.
- Name interfaces clearly (like `Drawable`, `IShape`).

---

## Extra Context

- A class with at least one pure virtual function is called an **abstract class**.
- we **cannot** create objects of abstract classes.
- Interfaces are a way to describe what a class can do, not how it does it.

---

**Summary:**  
- A **pure virtual function** is a function with `= 0` in a base class, forcing subclasses to implement it.  
- An **interface** is a class with only pure virtual functions, defining a contract for subclasses.  
These are key tools for organizing and structuring our C++ code!


--- 

# Here a more detailed exemple : 
Here’s an example using a `Character` interface and several classes like `Warrior`, `King`, and `Farmer` that implement it.

---

````cpp
#include <iostream>
#include <string>

// Interface: Character
class Character {
public:
    virtual void introduce() = 0;      // Pure virtual function
    virtual void specialMove() = 0;    // Another pure virtual function
    virtual ~Character() {}            // Virtual destructor (good practice)
};

// Warrior implements Character
class Warrior : public Character {
public:
    void introduce() {
        std::cout << "I am a brave Warrior!" << std::endl;
    }
    void specialMove() {
        std::cout << "Warrior uses Power Strike!" << std::endl;
    }
};

// King implements Character
class King : public Character {
public:
    void introduce() {
        std::cout << "I am the mighty King!" << std::endl;
    }
    void specialMove() {
        std::cout << "King commands Royal Decree!" << std::endl;
    }
};

// Farmer implements Character
class Farmer : public Character {
public:
    void introduce() {
        std::cout << "I am a humble Farmer." << std::endl;
    }
    void specialMove() {
        std::cout << "Farmer grows a bountiful harvest!" << std::endl;
    }
};

// Mage implements Character
class Mage : public Character {
public:
    void introduce() {
        std::cout << "I am a wise Mage." << std::endl;
    }
    void specialMove() {
        std::cout << "Mage casts Fireball!" << std::endl;
    }
};

int main() {
    Character* party[4];
    party[0] = new Warrior();
    party[1] = new King();
    party[2] = new Farmer();
    party[3] = new Mage();

    for (int i = 0; i < 4; ++i) {
        party[i]->introduce();
        party[i]->specialMove();
        std::cout << std::endl;
        delete party[i];
    }

    return 0;
}
````

---

### What does this show?

- `Character` is an **interface** (all functions are pure virtual).
- Each class (`Warrior`, `King`, `Farmer`, `Mage`) **implements** the interface in its own way.
- we can treat all characters the same way in our code, but each one behaves differently.

This is a classic use of interfaces and polymorphism in C++!