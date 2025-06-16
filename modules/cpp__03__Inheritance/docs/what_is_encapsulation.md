# code exemple : 

````cpp
#include <iostream>
#include <string>

// Engine class with encapsulation
class Engine {
private:
	int horsepower;

public:
	Engine(int hp) : horsepower(hp) {}
	int getHorsepower() const { return horsepower; }
};

// Transmission class with encapsulation
class Transmission {
private:
	std::string type; // e.g., "Automatic" or "Manual"

public:
	Transmission(const std::string& t) : type(t) {}
	std::string getType() const { return type; }
};

// Dashboard class with encapsulation
class Dashboard {
private:
	float fuelLevel; // in liters

public:
	Dashboard(float fuel) : fuelLevel(fuel) {}

	float getFuelLevel() const { return fuelLevel; }
	void refuel(float amount) {
		if (amount > 0)
			fuelLevel += amount;
	}
};

// Car class encapsulates Engine, Transmission, and Dashboard
class Car {
private:
	Engine engine;
	Transmission transmission;
	Dashboard dashboard;
	std::string model;

public:
	Car(std::string m, int hp, std::string transType, float fuel) : engine(hp), transmission(transType), dashboard(fuel), model(m) {}
	void drive() {
		std::cout << "Driving " << model << " with " << engine.getHorsepower()
				  << " HP, " << transmission.getType()
				  << " transmission, fuel: " << dashboard.getFuelLevel() << "L." << std::endl;
	}
	void refuel(float amount) { dashboard.refuel(amount); }
};

int main() {
	Car myCar("Toyota", 120, "Automatic", 40.0f);

	myCar.drive();
	myCar.refuel(10.0f);
	myCar.drive();

	// The following lines would cause errors because of encapsulation:
	// myCar.engine.horsepower = 200;
	// myCar.transmission.type = "Manual";
	// myCar.dashboard.fuelLevel = 100.0f;

	return (0);
}
````

---

# 🔐 What is **Encapsulation**?

## 🧠 In Short

| Term              | Meaning                                            |
| ----------------- | -------------------------------------------------- |
| **Encapsulation** | Hiding the inner parts of an object                |
| **private**       | Only accessible inside the class                   |
| **public**        | Accessible from anywhere                           |
| **getter**        | Public method to *read* private data               |
| **setter**        | Public method to *write* private data (with rules) |

**Encapsulation** is the idea of **hiding the internal details** of how something works and **only showing what's necessary** to the outside world.
In C++, this is done using **classes** and by setting class members to `private`, `protected`, or `public`.

👉 Imagine a **car**:
we can **drive** it or **refuel** it, but we **don’t need to know** (and **shouldn’t change**) how its engine or transmission works inside.

---

## 📦 In our Code: Where Is Encapsulation?

Let's look at this class:

```cpp
class Engine {
private:
	int horsepower; // this is hidden

public:
	Engine(int hp) : horsepower(hp) {}
	int getHorsepower() const { return horsepower; } // this is the public interface
};
```

* `horsepower` is **private** → No one outside the `Engine` class can change it directly.
* `getHorsepower()` is **public** → It gives *controlled access* to the private data.

🛡️ Same applies to `Transmission`, `Dashboard`, and even the `Car` class.

---

## ✅ Why Is Encapsulation **Important**?

1. **Protects Data**
   No one can accidentally change the internal state in a wrong way.

2. **Controls Access**
   we decide *how* people can interact with our object — through *methods*.

3. **Easy to Maintain**
   If we want to change how something works internally later, we can — as long as the public interface stays the same.

4. **Avoids Bugs**
   Prevents external code from putting the object into an invalid or dangerous state.

---

## 🚫 What Happens *Without* Encapsulation?

If this line were allowed:

```cpp
myCar.engine.horsepower = 500;
```

* Anyone could *change* the engine's data directly.
* That could make the car behave in unpredictable ways.
* Maybe other parts like fuel consumption aren’t ready for 500 HP.

Encapsulation **prevents** this kind of mistake.

---

## 🧼 Good Practices

1. **Always keep member variables `private` or `protected`.**
2. **Create `getters` and `setters`** if access is really needed.

   * Only expose what's absolutely necessary.
3. **Avoid making everything public just to “make it work.”**
4. **Immutable when possible**: If a value shouldn’t change, avoid creating a setter.

---

## 🧊 Bonus: When Should we Use Setters?

Example:

```cpp
void setHorsepower(int hp) {
	if (hp > 0)
		horsepower = hp;
}
```

* Setters give we **control**.
* we can add **validation**, logging, or other behavior.

---

## 💡 Extra Illustration

### Without encapsulation:

```cpp
struct BadEngine {
	int horsepower;
};

BadEngine e;
e.horsepower = -100; // oops! invalid value, engine broken now
```

### With encapsulation:

```cpp
class GoodEngine {
private:
	int horsepower;

public:
	void setHorsepower(int hp) {
		if (hp > 0)
			horsepower = hp;
	}
};
```
