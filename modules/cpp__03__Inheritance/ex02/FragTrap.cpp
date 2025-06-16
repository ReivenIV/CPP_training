/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 19:43:06 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/09 19:43:06 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {

	_name = "Default FragTrap";
	_hit_points = 100;
	_energy_points = 100;
	_damage_points = 30;
	std::cout << "🙌   Default FragTrap created" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	_name = name;
	_hit_points = 100;
	_energy_points = 100;
	_damage_points = 30;
	std::cout << "🙌   FragTrap " << name << "created" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "🙌   FragTrap destroyed" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy): ClapTrap(copy) { *this = copy; }

FragTrap &FragTrap::operator=(FragTrap const &instance) {
	ClapTrap::operator=(instance);
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << "🙌   high Fives Guys" << std::endl;
}