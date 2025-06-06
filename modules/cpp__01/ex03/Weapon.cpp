/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapong.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:38:31 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/05 12:38:31 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Constructor
// REMINDER : name is the weapon_name. 
Weapon::Weapon(std::string name) : _type(name) {}

// Destructor
Weapon::~Weapon(){
	std::cout << _type << " : got rusty and got destroyed by time" << std::endl;
}

// Setter
std::string Weapon::getType() const { return (_type); }

// Getter
void	Weapon::setType(std::string type)
{
	_type = type;
}
