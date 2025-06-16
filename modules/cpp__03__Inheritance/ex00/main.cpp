/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:05:13 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/09 18:05:13 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	trapA("Bob");
	ClapTrap	trapB("v1");

	std::cout << "\n" << std::endl;

	trapA.attack("v1");
	trapA.attack("v1");
	trapA.attack("v1");
	trapA.beRepaired(10);

	trapB.takeDamage(2);
	trapB.takeDamage(2);
	trapB.takeDamage(2);
	trapB.beRepaired(4);
	trapB.attack("Bob");

	trapA.takeDamage(22);

	std::cout << "\n\nFight is over \n" << std::endl;
	return (0);
}