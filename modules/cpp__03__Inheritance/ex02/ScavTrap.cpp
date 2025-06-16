/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:41:44 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/09 18:41:44 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	_name = "name not found";
	_hit_points = 100;
	_energy_points = 50;
	_damage_points = 20;
	std::cout << "🛡️   ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_damage_points = 20;
	std::cout << "🛡️   ScavTrap named: " << name << " created " << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " destructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) { *this = copy; }

ScavTrap &ScavTrap::operator=(ScavTrap const &instance) {
	ClapTrap::operator=(instance);
	return (*this);
}

void	ScavTrap::guardGate() {
	std::cout << "🛡️   ScavTrap " << _name << " guard gate mode activated 🏰" << std::endl;
}
