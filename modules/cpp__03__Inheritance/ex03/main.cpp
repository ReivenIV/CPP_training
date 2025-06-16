/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:32:43 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/09 18:32:43 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	trapA("Clap__Harlen ");
	ScavTrap	trapB("Scav__V2 ");
	FragTrap	trapC("Frag__Five ");
	DiamondTrap	trapD("Diam__Jewel");

	std::cout << "\n" << std::endl;

	trapA.attack("Scav__V2");
	trapA.attack("Scav__V2");
	trapA.attack("Scav__V2");
	trapA.beRepaired(10);

	trapB.takeDamage(2);
	trapB.takeDamage(2);
	trapB.takeDamage(2);
	trapB.beRepaired(4);
	trapB.attack("Clap__Harlen");

	trapA.takeDamage(22);
	trapB.guardGate();
	trapC.highFivesGuys();

	trapD.beRepaired(50);
	trapD.whoAmI();
	trapD.guardGate();
	trapD.highFivesGuys();

	std::cout << "\n\nFight is over \n" << std::endl;
	return (0);
}