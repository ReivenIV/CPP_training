## Summary: 
- Use `private` for implementation details.
- Use `public` for the interface.
- Encapsulate data and expose only what is necessary.  
This leads to safer, more maintainable code.

---

In C++, **visibility** (also called **access control**) determines which parts of your code can access members (variables and functions) of a class. The main access specifiers are:

### 1. `public`
- Members declared as `public` can be accessed from **anywhere** in your code (inside or outside the class).
- Example from your code:
	```cpp
	public:
			int publicFoo;
			void publicBar(void) const;
	```
	These can be accessed by any code that has an instance of `Sample`.

### 2. `private`
- Members declared as `private` can **only** be accessed from **within the class itself**.
- Example from your code:
	```cpp
	private:
			int _privateFoo;
			void _privateBar(void) const;
	```
	These cannot be accessed directly from outside the class.

---

## Why Use `private` and `public`?

- **Encapsulation:** Hides internal details and only exposes what is necessary.
- **Data Protection:** Prevents external code from changing internal state in unexpected ways.
- **Interface vs. Implementation:** Public members define how the class is used; private members define how it works internally.

---

## Good Practices

- **Keep data members `private`**: Only expose what is necessary. Use `public` for methods that form the interface.
- **Use getter/setter methods**: If you need to access or modify private data, provide controlled access via public methods.
- **Minimize public members**: The fewer public members, the easier it is to maintain and change the class without breaking other code.
- **Use `protected` for inheritance**: If you want derived classes to access members, but not the outside world, use `protected`.

---

### Example

```cpp
class Example {
public:
		void setValue(int v) { value = v; }
		int getValue() const { return value; }
private:
		int value;
};
```

Here, `value` is private, but can be accessed via public methods.
