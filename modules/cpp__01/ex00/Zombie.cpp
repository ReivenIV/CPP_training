/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 17:24:43 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/04 17:24:43 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//* Constructor
Zombie::Zombie(std::string name){ _name = name; }

//* Destructor
Zombie::~Zombie()
{
	std::cout << _name << "has entered the paradise of zombies" << std::endl;
}

void	Zombie::announce()
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}


