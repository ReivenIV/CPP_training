/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:26:13 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/09 16:26:13 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>
class ClapTrap {
	private: 
		std::string		_name;
		unsigned int	_hit_points;
		int				_energy_points;
		int				_damage_points;
	
	public: 

		~ClapTrap();										// destructor
		ClapTrap();											// constructor default.
		ClapTrap(std::string name);							// constructor with name.
		ClapTrap(ClapTrap const& copy);						// copy.	
		ClapTrap & operator=(ClapTrap const & instance);	// operator "="
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif