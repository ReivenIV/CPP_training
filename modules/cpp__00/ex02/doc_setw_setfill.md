## include <iomanip>
Here are some more examples of using `std::setw` and `std::setfill`:

```cpp
// Example 1: Setting the minimum width to 5 and filling with spaces
std::cout << std::setw(5) << "Hello" << std::endl;
// Output: "Hello" (no padding, because the string is already 5 characters long)

// Example 2: Setting the minimum width to 10 and filling with spaces
std::cout << std::setw(10) << "Hello" << std::endl;
// Output: "     Hello" (padded with 5 spaces)

// Example 3: Setting the minimum width to 5 and filling with zeros
std::cout << std::setw(5) << std::setfill('0') << 123 << std::endl;
// Output: "00123" (padded with 2 zeros)

// Example 4: Setting the minimum width to 10 and filling with zeros
std::cout << std::setw(10) << std::setfill('0') << 123 << std::endl;
// Output: "0000000123" (padded with 7 zeros)

// Example 5: Setting the minimum width to 5 and filling with asterisks
std::cout << std::setw(5) << std::setfill('*') << 123 << std::endl;
// Output: "**123" (padded with 2 asterisks)
```

Note that the `std::setfill` manipulator only affects the output of the next `std::cout` statement, so you need to use it again if you want to change the fill character for subsequent output.

Also, you can use `std::setfill` to set the fill character to a specific character, and then use `std::setw` to set the minimum width. For example:

```cpp
std::cout << std::setfill('#');
std::cout << std::setw(5) << 123 << std::endl;
// Output: "##123" (padded with 2 number signs)
```

In this example, the `std::setfill` manipulator sets the fill character to `#`, and then the `std::setw` manipulator sets the minimum width to 5. The output is padded with 2 number signs.