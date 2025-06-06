/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:00:07 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/05 13:00:07 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon* _weapon;
		std::string const _name;

	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon& weapon);
		void	attack() const ;
};

#endif