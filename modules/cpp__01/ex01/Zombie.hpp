/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:57:29 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/04 19:57:29 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

# include <iostream>
# include <sstream>
class Zombie{

	public:
		Zombie();
		~Zombie();
		void	announce();
		Zombie* zombieHorde( int N, std::string name );

	private:
		std::string _name;

};

#endif