#include <iostream>
#include "Sample_class.hpp"

int main()
{
	Sample instance_sample;

	instance_sample.foo = 42;
	std::cout << "Instance.foo: " << instance_sample.foo << std::endl;
	instance_sample.bar();

	return (0);
}