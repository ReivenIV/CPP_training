/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:40:16 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/09 16:40:16 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap(){
	std::cout << "Destructor for " << _name << " called" << std::endl;
}

ClapTrap::ClapTrap() : _name("Default Claptrap"), _hit_points(10), _energy_points(10), _damage_points(0) {
	std::cout << " ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _damage_points(0) {
	std::cout << "⛑️   ClapTrap constructor named: " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) { *this = copy; }		// Will create a copy thanks to the "=" operator.

ClapTrap &ClapTrap::operator=(ClapTrap const & instance)
{
	_name = instance._name;
	_hit_points = instance._hit_points;
	_energy_points = instance._energy_points;
	_damage_points = instance._damage_points;
	
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (_hit_points <= 0 || _energy_points <= 0) {
		std::cout << _name << " can't do action dear. " << std::endl;
		return ;
	}
	std::cout << _name << " attack " << target << " causing " << _damage_points << " points of damage!" << std::endl;
	_energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hit_points < amount) {
		std::cout << "⛑️   ClapTrap " << _name << " is out of combat" << std::endl;
		_hit_points = 0;
		return ;
	}
	std::cout << "⛑️   ClapTrap " << _name << " take damage causing " << amount << " hit points lost !" << std::endl;
	_hit_points = _hit_points - amount;	
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energy_points <= 0) {
		std::cout << "⛑️ ClapTrap " << _name << " has no more energy left need recharge ASAP" << std::endl;
		return ;
	}
	std::cout << "⛑️   ClapTrap " << _name << " get repaired  causing " << amount << " energie points gained !" << std::endl;
	_hit_points = _hit_points + amount;
	_energy_points--;
}
