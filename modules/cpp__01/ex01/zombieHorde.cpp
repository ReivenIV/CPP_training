/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 20:18:03 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/04 20:18:03 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	int i = 0;

	Zombie* new_horde = new Zombie[N];
	if (new_horde == NULL)
		return (NULL);
	while (i < N)
	{
		std::ostringstream oss;
		oss << i << "_" << name;
		new_horde[i]._name = oss.str();
		i++;
	}
	return (new_horde);
}