#include <iostream>
#include "Sample_class.hpp"

Sample::Sample(void){
	std::cout << "Constructor called " << std::endl;
	return ;
}

Sample::~Sample(void){
	std::cout << "Desctructor called" << std::endl;
	return ;
}

void	Sample::bar(void){

	std::cout << "Member function bar called. the random nb inputed is : ";
	if (!this->foo)
		std::cout << "NULL";
	else
		std::cout << this->foo;
	std::cout << std::endl;
	return ;
}