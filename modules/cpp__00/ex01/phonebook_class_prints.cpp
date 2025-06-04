/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook_class_prints.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:48:39 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/02 18:48:39 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook_class.hpp"

//* Will clean terminal and print headers & instructions.
void print_header(void)
{
    std::cout << "\033[2J\033[1;1H";
    std::cout << " _____     _ _                                            _____   _____ " << std::endl;
    std::cout << "|_   _|___| | |     _____ ___      _____ ___ ___ ___     |     | |     |" << std::endl;
    std::cout << "  | | | -_| | |    |     | -_|    |     | . |  _| -_|    |  |  |_|  |  |" << std::endl;
    std::cout << "  |_| |___|_|_|    |_|_|_|___|    |_|_|_|___|_| |___|    |_____|_|_____|" << std::endl;
    std::cout << "\033[36m  - OPTIONS  :: ADD, SEARCH, EXIT & CLEAR\033[0m" << std::endl;
    std::cout << "\033[36m  - REMINDER :: Max amount of contact in phonebook " << Phonebook::MAX_AMOUNT_CONTACTS << "\033[0m\n\n\n" << std::endl;
}

//* Will print only 9chars of the inputed data then will add a "." and stop.
static void print_contact(std::string str)
{
	int i = 0;

	if (str.length() > 10)
	{
		str[9] = '.';
		while (str[i] && i < 10)
		{
			std::cout << "\033[1m" << str[i] << "\033[0m";
			i++;
		}
	}
	else
		std::cout << std::setw(10) << str;
}

//* Will print table of contacts with data shortened to 9 chars.
void	Phonebook::print_phonebook(void) const {
	int i = 0;
	std::cout << "\033[1m\n###################################################\033[0m\n";
	std::cout << "\033[1m |                                               |\n\033[0m";
	std::cout << "\033[1m |  Index    |First Name | Last Name | Nickname  |\n\033[0m";
	std::cout << "\033[1m |                                               |\033[0m";
	while (i < Phonebook::_contact_id) {
		std::cout << "\033[1m\n |\033[0m";
		std::cout << std::setw(10) << _contact[i].get_id() + 1;
		std::cout << "\033[1m |\033[0m";
		print_contact(_contact[i].get_first_name());
		std::cout << "\033[1m |\033[0m";
		print_contact(_contact[i].get_last_name());
		std::cout << "\033[1m |\033[0m";
		print_contact(_contact[i].get_nickname());
		std::cout << "\033[1m |\033[0m";
		i++;
	}
	std::cout << "\n###################################################\n";
}

//* Will print all data saved from each contact.
void Phonebook::print_all_contact_data(int _contact_id)
{
	std::cout << "\n\033[4m Contact " << _contact_id + 1 << " :\033[0m\n" << std::endl;
	std::cout << "\033[36m  FIRST_NAME     = " << _contact[_contact_id].get_first_name() << "\n \033[0m";
	std::cout << "\033[36m LAST_NAME      = " << _contact[_contact_id].get_last_name() << "\n \033[0m";
	std::cout << "\033[36m NICKNAME       = " << _contact[_contact_id].get_nickname() << "\n \033[0m";
	std::cout << "\033[36m NUMBER         = " << _contact[_contact_id].get_number() << "\n \033[0m";
	std::cout << "\033[36m DARKEST_SECRET = " << _contact[_contact_id].get_secret() << "\n \033[0m";
	std::cout << std::endl;
}
