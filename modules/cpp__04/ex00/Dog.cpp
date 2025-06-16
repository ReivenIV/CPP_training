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
}

Dog::Dog() {
	std::cout << "🐶   Dog default constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(std::string name) {
	std::cout << "🐶   Dog constructor called to " << name << std::endl;
	_type = "Dog";
}

Dog::Dog(Dog const &copy) : Animal(copy) { *this = copy; }

Dog &Dog::operator=(Dog const &instance) {
	_type = instance._type;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "🐶   Wouf Wouf" << std::endl;
}
