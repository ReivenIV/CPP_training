 
# What is a const member function?

## Summary:
Const member functions make your code safer, clearer, and easier to use. They are a good habit in C++!

### What does it bring to a project?

- **Fewer bugs:** You can’t accidentally change things you shouldn’t.
- **Better teamwork:** Other people know which functions are safe to call.
- **Easier to maintain:** Code is clearer and easier to understand.


### Good practice

- Use `const` for all functions that don’t change the object.
- Combine with `const` references for parameters for even more safety.

---


A **const member function** is a function in a class that **promises not to change the object**.  
You write `const` after the function name, like this:

```cpp
class Car {
public:
	int getSpeed() const { // <-- const here
		return speed;
	}
private:
	int speed;
};
```

---

### Why is it important?

1. **Safety:**  
   The compiler will stop you if you try to change any member variables inside a `const` function.

2. **Clarity:**  
   Other programmers can see that this function is safe and won’t change the object.

3. **Allows use with const objects:**  
   You can call `const` functions on objects that are themselves `const`.

---

### Example

```cpp
class Book {
public:
	std::string getTitle() const { // promises not to change the Book
		return title;
	}
	void setTitle(const std::string& t) { // can change the Book
		title = t;
	}
private:
	std::string title;
};

void printBookTitle(const Book& b) {
	std::cout << b.getTitle() << std::endl; // OK, getTitle is const
}
```

If you try to change `title` inside `getTitle() const`, the compiler will give an error.

---

