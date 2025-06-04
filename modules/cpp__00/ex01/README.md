## <iostream>

- **What is it?**  
  A standard C++ library for input and output (I/O) operations.
- **What does it provide?**  
  - `std::cout` for printing to the screen.
  - `std::cin` for reading from the keyboard.
  - `std::endl` for new lines.
- **Simple Example:**
  ````cpp
  #include <iostream>
  int main() {
      std::cout << "Hello, world!" << std::endl;
      int age;
      std::cin >> age;
      return 0;
  }
  ````
---

## <iomanip>

- **What is it?**  
  A library for formatting input and output.
- **Is it important?**  
  Yes, especially for making tables or aligning output, like in Phonebook’s contact list proyect.

- **What does it provide?**  
  - `std::setw(n)`: Sets the width of the next output field.
  - `std::setfill(c)`: Sets the fill character.
  - `std::setprecision(n)`: Sets decimal precision for floating numbers.
- **Simple Example:**
  ````cpp
  #include <iostream>
  #include <iomanip>
  int main() {
      std::cout << std::setw(10) << "Name" << std::setw(5) << "Age" << std::endl;
      std::cout << std::setw(10) << "Alice" << std::setw(5) << 23 << std::endl;
      return 0;
  }
  ````
---

## **Relevance in Project**

- **`<iostream>`** is used everywhere in the code for printing menus, prompts, and reading user input.
- **`<iomanip>`** is used for formatting the contact list (see `std::setw(10)` in `handler_get_contact()` and `print_contact()` functions).
- **Important Tips:**
  - Always include these headers when using their features.
  - `std::setw` only affects the next output, not all.
  - For user input, always check if `std::getline` or `std::cin` succeeded.
  - Mixing `std::cin` and `std::getline` can cause issues if not careful (e.g., leftover newlines).

---
