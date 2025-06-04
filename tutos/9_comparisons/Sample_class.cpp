#include <iostream>
#include "Sample_class.hpp"

Sample::Sample(int v)
{
	std::cout << "Constructor called " << std::endl;
	this->handler_set_foo(v);
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Sample::getFoo(void) const
{
	return this->_foo;
}

bool Sample::_setFoo(int v)
{
	if (v >= 0)
	{
		this->_foo = v;
		return (true);
	}
	return (false);
}

// Will accept only positive number.
void Sample::handler_set_foo(int v)
{
	if (_setFoo(v))
		std::cout << "setted to: " << this->getFoo() << std::endl;
	else 
		std::cout << "Error while seeting foo" << std::endl;
}