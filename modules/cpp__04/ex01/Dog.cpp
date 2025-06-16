/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:38:09 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/10 18:38:09 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog() {
	std::cout << "🐶   Dog destructor called" << std::endl;
	delete _brain;
}

Dog::Dog() {
	std::cout << "🐶   Dog default constructor called" << std::endl;
	_type = "🐶   Dog";
	_brain = new Brain();
}

Dog::Dog(Dog const &copy) : Animal(copy), _brain(new Brain(*copy._brain)) {
	_type = copy._type;
}

Dog &Dog::operator=(Dog const &instance) {
	if (this != &instance)
	{
		if (_brain)
			delete _brain;
		_brain = new Brain(*instance._brain);
	}
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "🐶   Wouf Wouf" << std::endl;
}
// We return the actual Brain instance related to the intance of the dog. 
Brain &Dog::get_brain() const {
	return (*this->_brain);
}