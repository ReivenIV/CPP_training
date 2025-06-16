/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:13:06 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/10 18:13:06 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat() {
	std::cout << "🐱   Cat destructor called" << std::endl;
	delete _brain;
}

Cat::Cat() {
	std::cout << "🐱   Cat default created" << std::endl;
	_type = "🐱   Cat";
	_brain = new Brain();
}

Cat::Cat(Cat const &copy) : Animal(copy), _brain(new Brain(*copy._brain)) {  			// updated
	_type = copy._type;
}

Cat &Cat::operator=(Cat const &instance) { 			// updated
	if (this != &instance) {
		_type = instance._type;
		if (_brain)
			delete _brain;
		_brain = new Brain(*instance._brain);
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "🐱   miaou" << std::endl;
}

// you have more information in docs about these function.
Brain	&Cat::get_brain() const {
	return (*this->_brain);
}
