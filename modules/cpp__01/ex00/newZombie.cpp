/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 17:25:39 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/04 17:25:39 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie *new_pointer_zombie = new Zombie(name);
	if (new_pointer_zombie == NULL)
		return (NULL);
	return (new_pointer_zombie);
}