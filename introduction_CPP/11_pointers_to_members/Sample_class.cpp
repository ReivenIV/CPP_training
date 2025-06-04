#include <iostream>
#include "Sample_class.hpp"

Sample::Sample(void) : foo(0)
{
	std::cout << "Construcot called" << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called " << std::endl;
	return ;
}

void	Sample::bar(void) const
{
	std::cout << "Member function bar called" << std::endl;
	return ;
}
