/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:59:39 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/11 14:59:39 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::~WrongDog() {
	std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog::WrongDog() {
	std::cout << "WrongDog default constructor called" << std::endl;
	_type = "WrongDog_default";
}

WrongDog::WrongDog(WrongDog const &copy) : WrongAnimal(copy)  { *this = copy; }

WrongDog &WrongDog::operator=(WrongDog const &instance) {
	_type = instance._type;
	return (*this);
}

void WrongDog::makeSound() const {
	std::cout << "WrongDog makeSound() called" << std::endl;
}