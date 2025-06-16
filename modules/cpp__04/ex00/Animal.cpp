/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:01:15 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/10 18:01:15 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal() {
	std::cout << "🌎   Animal destructor called" << std::endl;
}

Animal::Animal() {
	std::cout << "🌎   Animal default constructor" << std::endl;
	_type = "default_Animal";
}

Animal::Animal(const Animal &copy) { *this = copy; }

Animal &Animal::operator=(Animal const &instance) {
	_type = instance._type;
	return (*this);
}

void Animal::makeSound() const {
	std::cout << "Animal: Not clear sound" << std::endl;
}

std::string Animal::get_type() const { return _type; }
