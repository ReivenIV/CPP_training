/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:51:44 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/11 14:51:44 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor called" << std::endl;
	_type = "WrongCat_default";
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy) { *this = copy; }

WrongCat &WrongCat::operator=(WrongCat const &instance) {
	_type = instance._type;
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat makeSound() called" << std::endl;
}
