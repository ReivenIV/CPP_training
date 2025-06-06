/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 17:25:41 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/04 17:25:41 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie	newZombie(name);
	newZombie.announce();
}