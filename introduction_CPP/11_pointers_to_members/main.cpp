#include <iostream>
#include "Sample_class.hpp"

// This function demonstrates how to use pointers to members and member functions in C++.
int	main()
{
	Sample	instance;													// Create an object of Sample class
	Sample*	instancep = &instance;										// Create a pointer to the Sample object

	int		Sample::*p = NULL;											// Declare a pointer to an int member of Sample, initialize to NULL
	void	(Sample::*f)(void) const;									// Declare a pointer to a const member function of Sample

	p = &Sample::foo;													// Set p to point to the 'foo' member of Sample
	std::cout << "Value of member foo: " << instance.foo << std::endl;	// Print the value of foo
	instance.*p = 21;                         							// Set foo to 21 using the pointer to member
	std::cout << "Value of member foo: " << instance.foo << std::endl; 
	instance.*p = 41;                         							// Set foo to 41 using the pointer to member
	std::cout << "Value of member foo: " << instance.foo << std::endl;

	f = &Sample::bar;													// Set f to point to the 'bar' member function

	(instance.*f)();													// Call the bar function using the object and pointer to member function
	(instancep->*f)();													// Call the bar function using the pointer to object and pointer to member function

	return (0);															// End of the program
}