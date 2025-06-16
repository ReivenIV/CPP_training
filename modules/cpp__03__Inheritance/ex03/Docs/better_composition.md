### When we say **"Prefer composition over inheritance"**, it means:

**Instead of making a class inherit from many other classes, make it contain objects of those classes as member variables.**

---

### Simple Example

#### Using Multiple Inheritance

````cpp
class Printer {
public:
    void print() { std::cout << "Printing\n"; }
};

class Scanner {
public:
    void scan() { std::cout << "Scanning\n"; }
};

class Copier : public Printer, public Scanner { };
````

Here, `Copier` inherits from both `Printer` and `Scanner`.

---

#### Using Composition (Better Practice)

````cpp
class Printer {
public:
    void print() { std::cout << "Printing\n"; }
};

class Scanner {
public:
    void scan() { std::cout << "Scanning\n"; }
};

class Copier {
private:
    Printer printer;
    Scanner scanner;
public:
    void print() { printer.print(); }
    void scan() { scanner.scan(); }
};
````

Here, `Copier` **has** a `Printer` and a `Scanner` as members, instead of inheriting from them.

---

### Why Prefer Composition?

- **Less ambiguity:** No diamond problem or function conflicts.
- **More flexible:** we can change or replace parts easily.
- **Easier to understand and maintain.**

---

**Summary:**  
Composition means building classes by combining objects, not by inheriting from many classes.  
It’s usually safer and simpler!