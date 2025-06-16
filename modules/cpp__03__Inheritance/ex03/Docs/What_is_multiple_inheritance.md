# What is Multiple Inheritance?

**Multiple inheritance** means a class can inherit from more than one base class.  
This lets a class combine features from several classes.

### Simple Example

````cpp
class Animal {
public:
    void eat() { std::cout << "Eating\n"; }
};

class Swimmer {
public:
    void swim() { std::cout << "Swimming\n"; }
};

// Penguin inherits from both Animal and Swimmer
class Penguin : public Animal, public Swimmer { };

Penguin p;
p.eat();   // OK
p.swim();  // OK
````

Here, `Penguin` gets both `eat()` and `swim()`.

---

## Things to Know & Be Aware Of

### 1. **Ambiguity**

If both base classes have a function or variable with the same name, the compiler gets confused:

````cpp
class A { public: void hello() { std::cout << "A\n"; } };
class B { public: void hello() { std::cout << "B\n"; } };
class C : public A, public B { };

C c;
c.hello(); // ERROR: Which hello()?
````

**How to fix:**  
Use the scope operator:

````cpp
c.A::hello(); // Calls A's hello()
c.B::hello(); // Calls B's hello()
````

---

### 2. **The Diamond Problem**

If two base classes share a common base, we can get two copies of the same base class.  
This causes ambiguity and wastes memory.

**Good Practice:**  
Use `virtual` inheritance to make sure there’s only one copy of the shared base.

---

### 3. **Complexity**

Multiple inheritance can make code harder to read and maintain.  
It’s easy to create confusing relationships between classes.

---

## Good Practices

- **Prefer composition over multiple inheritance** when possible (use member objects instead of inheriting from many classes).
- If we must use multiple inheritance, check for the diamond problem and use `virtual` inheritance.
- Always be clear about which base class a function or variable comes from.
- Keep our class hierarchies simple.

---

## Extra Context

- Some languages (like Java) don’t allow multiple inheritance of classes to avoid these problems.
- C++ allows it for flexibility, but we must be careful.

---

**Summary:**  
- Multiple inheritance is powerful but tricky.  
- Watch out for ambiguity and the diamond problem.  
- Use `virtual` inheritance when needed, and keep our code simple and clear!
- For better practices check the file : Docs\better_composition.md