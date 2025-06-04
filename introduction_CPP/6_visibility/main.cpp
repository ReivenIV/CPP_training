#include <iostream>
#include "Sample_class.hpp"

// /host-root/host_mnt/Users/heaven/42_proyects/cpp_perso/tutos/6_visibility
int	main()
{
	Sample instance;

	instance.publicFoo = 42;
	std::cout << "instance.publicFoo :" << instance.publicFoo << std::endl;

	instance.publicBar();

	return (0);
}