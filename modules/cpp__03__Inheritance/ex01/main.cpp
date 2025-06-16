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

# include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	trapA("Harlen");
	ScavTrap	trapB("V2");

	std::cout << "\n" << std::endl;

	trapA.attack("V2");
	trapA.attack("V2");
	trapA.attack("V2");
	trapA.beRepaired(10);

	trapB.takeDamage(2);
	trapB.takeDamage(2);
	trapB.takeDamage(2);
	trapB.beRepaired(4);
	trapB.attack("Harlen");

	trapA.takeDamage(22);
	trapB.guardGate();

	std::cout << "\n\nFight is over \n" << std::endl;
	return (0);
}