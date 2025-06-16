/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:01:15 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/10 18:01:15 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal() {
	std::cout << "AAnimal default constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy) { *this = copy; }

AAnimal &AAnimal::operator=(AAnimal const &instance) {
	_type = instance._type;
	return (*this);
}

std::string AAnimal::get_type() const { return _type; }
