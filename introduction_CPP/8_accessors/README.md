## What are Accessors?

**Accessors** are special functions in a class that let you get (read) or set (change) the value of private variables.  
- A **getter** lets you read a value.
- A **setter** lets you change a value.

In your code, you have:
```cpp
int getFoo(void) const;   // Getter
void setFoo(int v);       // Setter
```

### Why Use Accessors?

- **Encapsulation:** They keep your data safe. You control how variables are accessed or changed.
- **Validation:** You can check values before setting them (e.g., don’t allow negative ages).
- **Read-only:** You can make some variables readable but not changeable.

### Example

```cpp
class Person {
private:
    int age;

public:
    int getAge() const { return age; }
    void setAge(int a) {
        if (a >= 0) age = a; // Only allow non-negative ages
    }
};
```

### Good Practices

- Make variables **private**.
- Use **getters** and **setters** to access them.
- In setters, **validate** input if needed.
- Use `const` for getters (they don’t change the object).

### Why is this important?

- Keeps your code **safe** and **easy to maintain**.
- Prevents bugs from direct variable access.
- Makes your class easier to use and understand.

### Extra Context

This is part of **Object-Oriented Programming**.  
Accessors help you follow the principle of **encapsulation**—one of the core ideas in OOP.

If you have more questions or want to see more examples, just ask!