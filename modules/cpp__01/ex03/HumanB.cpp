/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:03:18 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/05 13:03:18 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	std::cout << _name << " arrived to the city" << std::endl;
}
HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}
void HumanB::attack() const {
    std::cout << _name << " attacks with " << _weapon->getType() << std::endl;
}