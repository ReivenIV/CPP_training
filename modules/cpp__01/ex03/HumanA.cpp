/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:46:19 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/05 12:46:19 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {}
HumanA::~HumanA() {
	std::cout << _name << " left the city and left behinf the " << _weapon.getType() << std::endl;
}

void HumanA::attack() {
	std::cout << _name << " attacks with their" << _weapon.getType() << std::endl;
}
