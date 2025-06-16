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
	std::cout << "😸   Cat destructor called" << std::endl;
}


Cat::Cat() {
	std::cout << "😸   Cat default created" << std::endl;
	_type = "Cat";
}

Cat::Cat(std::string name) {
	std::cout << "😸   Cat named " << name << " created"  << std::endl;
	_type = "Cat";
}

Cat::Cat(Cat const &copy) : Animal(copy) {
	*this = copy;
}

Cat &Cat::operator=(Cat const &instance) { 
	_type = instance._type;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "😸  miaou" << std::endl;
}
