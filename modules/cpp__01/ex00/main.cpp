/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:03:56 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/04 19:03:56 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	parent_zombie("Z_Parent BOB");

	Zombie *child_zombie;

	child_zombie = parent_zombie.newZombie("Z_Child CHICHI");

	child_zombie->announce();
	parent_zombie.announce();

	parent_zombie.randomChump("New zombie called JAZZ");

	delete child_zombie;
	return (0);
}
