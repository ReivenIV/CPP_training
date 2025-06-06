/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 17:20:10 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/04 17:20:10 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

# include <iostream>
# include <iomanip>

class	Zombie
{
	public: 
		Zombie(std::string name);
		~Zombie();
		void	announce();
		void	randomChump(std::string name);
		Zombie*	newZombie(std::string name);

	private:
		std::string _name;

};

#endif