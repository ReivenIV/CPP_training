/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 19:07:59 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/10 19:07:59 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal desctructor called" << std::endl;
}

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy) { *this = copy; }

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &instance) {
	_type = instance._type;
	return (*this);
}

std::string WrongAnimal::get_type() const { return (_type); }