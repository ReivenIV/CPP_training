#include <iostream>
#include "Sample_class.hpp"

int main()
{
	Sample instance;

	instance.handler_set_foo(42);
	instance.handler_set_foo( -42 );
	instance.handler_set_foo(8);
	instance.handler_set_foo(-2);
	instance.handler_set_foo(2000000000);
	return (0);
}