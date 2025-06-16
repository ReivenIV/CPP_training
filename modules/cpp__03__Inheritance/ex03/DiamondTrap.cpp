/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 21:28:46 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/09 21:28:46 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::~DiamondTrap() {
	std::cout << "💎   Diamond destroyed" << std::endl;
}

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap() {
	std::cout << "💎   DiamondTrap default constructor called" << std::endl;
	_name = "default";
	_hit_points = 100;	
	_energy_points = 50;
	_damage_points = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name) {
	std::cout << "💎   DiamondTrap constructor called" << std::endl;
    _name = name + "_clap_name";
	_hit_points = 100;
	_energy_points = 50;
	_damage_points = 30;	
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy) {
	std::cout << "💎   DiamondTrap copy called" << std::endl;
	
	_name = copy._name;
	_hit_points = copy._hit_points;
	_energy_points = copy._energy_points;
	_damage_points = copy._damage_points;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &instance) {
	std::cout << "💎   DiamondTrap operator '=' called" << std::endl;
	_name = instance._name;
	_hit_points = instance._hit_points;
	_energy_points = instance._energy_points;
	_damage_points = instance._damage_points;
	return (*this);
}

void DiamondTrap::whoAmI() {
	std::cout << "💎   DiamondTrap whoAmI called " << _name << std::endl;
}
