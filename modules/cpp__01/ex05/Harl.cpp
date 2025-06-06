/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harlo.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 17:29:33 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/05 17:29:33 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	std::cout << "Harl enter the stage. \n" << std::endl;
}

Harl::~Harl(void){
	std::cout << "Harl leaves the stage." << std::endl;
}

void	Harl::complain( std::string level ) {
	std::string acepted_strs[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*pointer_function[4])(void)const = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int i = 0;
	while (i < 4)
	{
		if (level == acepted_strs[i])
			(this->*pointer_function[i])();
		i++;
	}
}

void	Harl::_debug(void) const {
	std::cout << "msg DEBUG: __ Welcome Welcome __" << std::endl;
}


void	Harl::_info(void) const {
	std::cout << "msg INFO: Yhea ! " << std::endl;
}


void	Harl::_warning(void) const {
	std::cout << "msg WARNING: Of course ... " << std::endl;
}

void	Harl::_error(void) const {
	std::cout << "msg ERROR: OMG !! " << std::endl;
}