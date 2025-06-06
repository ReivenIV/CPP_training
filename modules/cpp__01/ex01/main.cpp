/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:29:18 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/05 11:29:18 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main(void)
{
	int i = 0;
	int amount_zombies_in_horde = 20;
	Zombie *horde_alfa;
	Zombie each_zombie;

	horde_alfa = each_zombie.zombieHorde(amount_zombies_in_horde, "BoB");
	while (i < amount_zombies_in_horde)
	{
		horde_alfa[i].announce();
		i++;
	}
	std::cout << "\n" << std::endl;
	delete[] horde_alfa;
	return (0);
}