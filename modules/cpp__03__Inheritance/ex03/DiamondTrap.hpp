/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 21:24:08 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/09 21:24:08 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class  DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string _name;
	
	public:
		~DiamondTrap();
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap (DiamondTrap const &copy);
		DiamondTrap &operator=(DiamondTrap const &instance);
		using ScavTrap::attack;
		void whoAmI();
};

#endif