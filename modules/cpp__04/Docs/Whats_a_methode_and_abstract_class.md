# What is a Method?

A **method** is just a function that is part of a class.  
It can use and change the data (variables) inside the class.

**Example:**

````cpp
class Dog {
public:
    void bark() { // bark is a method
        std::cout << "Woof!" << std::endl;
    }
};
````

we call a method like this:

````cpp
Dog d;
d.bark(); // Calls the bark method
````

---

# What is an Abstract Class?

An **abstract class** is a class that cannot be used to make objects directly.  
It has at least one **pure virtual function** (a function with `= 0` and no code).

**Example:**

````cpp
class Animal {
public:
    virtual void makeSound() = 0; // Pure virtual function
};
````

- we **cannot** do: `Animal a;` // Error!
- we **must** make a new class that inherits from `Animal` and implements `makeSound()`.

**Example of a derived class:**

````cpp
class Cat : public Animal {
public:
    void makeSound() {
        std::cout << "Meow!" << std::endl;
    }
};
````

Now we can do:

````cpp
Cat c;
c.makeSound(); // Prints "Meow!"
````

---

## Why are They Important?

- **Methods** let we organize code inside classes.
- **Abstract classes** help we define a common interface for many classes, but prevent creating objects that don’t make sense (like a generic `Animal`).
- They help we use **polymorphism**: we can write code that works with many different types of objects in a generic way.

---

## Good Practices

- Use abstract classes to define a base for related classes.
- Only make a class abstract if we don’t want it to be used directly.
- Always implement all pure virtual functions in derived classes.

---

## Extra Context

- Abstract classes are often used as **interfaces** or base classes.
- we can have methods with code in an abstract class, but at least one must be pure virtual.

---

**Summary:**  
- A **method** is a function inside a class.  
- An **abstract class** is a class with at least one pure virtual function, and we cannot create objects of it.  
They help we organize and structure our C++ code!



# An extra detailed exemple ::

Here’s, example using **robots** as the theme.  
We’ll have an abstract class `Robot` and several concrete robots: `CleaningRobot`, `BattleRobot`, and `ChefRobot`.

### What does this show?

- `Robot` is an **abstract class** (cannot be instantiated).
- Each robot type (`CleaningRobot`, `BattleRobot`, `ChefRobot`) **implements** the abstract methods in its own way.
- All robots can **recharge** using the base class method.
- You can treat all robots the same way in your code, but each one behaves differently!


````cpp
#include <iostream>
#include <string>

// Abstract class: Robot
class Robot {
public:
    virtual void introduce() = 0;      // Pure virtual function
    virtual void performTask() = 0;    // Pure virtual function

    void recharge() {                  // Regular method
        std::cout << "Recharging battery..." << std::endl;
    }

    virtual ~Robot() {}                // Virtual destructor
};

// Concrete class: CleaningRobot
class CleaningRobot : public Robot {
public:
    void introduce() {
        std::cout << "I am CleanBot 3000, your cleaning assistant!" << std::endl;
    }
    void performTask() {
        std::cout << "Vacuuming the floor and dusting shelves." << std::endl;
    }
};

// Concrete class: BattleRobot
class BattleRobot : public Robot {
public:
    void introduce() {
        std::cout << "I am WarDroid X, ready for battle!" << std::endl;
    }
    void performTask() {
        std::cout << "Activating laser cannons and deploying shields." << std::endl;
    }
};

// Concrete class: ChefRobot
class ChefRobot : public Robot {
public:
    void introduce() {
        std::cout << "I am ChefBot, your gourmet cooking specialist!" << std::endl;
    }
    void performTask() {
        std::cout << "Preparing a delicious futuristic meal." << std::endl;
    }
};

int main() {
    Robot* robots[3];
    robots[0] = new CleaningRobot();
    robots[1] = new BattleRobot();
    robots[2] = new ChefRobot();

    for (int i = 0; i < 3; ++i) {
        robots[i]->introduce();
        robots[i]->performTask();
        robots[i]->recharge();
        std::cout << std::endl;
        delete robots[i];
    }

    return (0);
}
````
