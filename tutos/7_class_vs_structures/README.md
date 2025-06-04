## Structures (`struct`) vs Classes (`class`)

#### 1. **What are they?**
- **Structures** and **classes** are both ways to group variables and functions together in C++.
- They let you create your own types, which can have data (variables) and behavior (functions).

#### 2. **Main Difference: Default Access**
- In a **struct**, everything is **public** by default.
- In a **class**, everything is **private** by default.

**Example:**

```cpp
struct MyStruct {
	int x; // public by default
};

class MyClass {
	int y; // private by default
};
```

#### 3. **Usage**
- Use **struct** when you just want to group data, and you don’t need to hide anything.
- Use **class** when you want to hide data (encapsulation) and control access.

#### 4. **Good Practices**
- Use `class` for objects with behavior (methods/functions) and data you want to protect.
- Use `struct` for simple data structures, like a group of related variables.

#### 5. **Why is this important?**
- **Encapsulation**: Classes help you protect your data and expose only what’s necessary.
- **Readability**: Using the right keyword makes your code easier to understand for others.

#### 6. **Example with Both**

```cpp
struct Point {
	int x;
	int y;
};

class Counter {
private:
	int count;
public:
	Counter() : count(0) {}
	void increment() { count++; }
	int get() const { return count; }
};
```

- `Point` is a simple data holder, so `struct` is fine.
- `Counter` hides its data and provides functions, so `class` is better.

---

### **Summary Table**

| Feature         | struct (C++) | class (C++) |
|-----------------|--------------|-------------|
| Default access  | public       | private     |
| Inheritance     | public       | private     |
| Use for         | Data         | Data + behavior |

---

**Best Practice:**  
Use `struct` for plain data, `class` for objects with logic and encapsulation.

Let me know if you want code examples or more details!