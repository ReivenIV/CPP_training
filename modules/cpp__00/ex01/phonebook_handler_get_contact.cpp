/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_handler_get_contact.cpp                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:49:38 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/03 17:49:38 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook_class.hpp"

int Phonebook::get_contact_index() {
	std::string inputed_data;
	while (!(str_is_numbers(inputed_data)) || xs_atoi(inputed_data) > Phonebook::_contact_id || xs_atoi(inputed_data) < 1) {
		if (!(str_is_numbers(inputed_data)))
			std::cout << "\n Input contact ID to see full information :  ";
		else
			std::cout << "\n Contact ID not found \n type index again please:  ";
		if (!(std::getline(std::cin, inputed_data)))
			return (-1);
	}
	return (xs_atoi(inputed_data));
}

// these should be a hanlder.
bool Phonebook::handler_get_contact() {
	if (Phonebook::_contact_id == 0) {
		std::cout << "currently the Phonebook is empty. ADD new contacts my dear" << std::endl;
		return (false);
	}
	print_header();
	print_phonebook();
	std::cout << "\n input contact ID to see the full information my dear : " << std::endl;
	int index = get_contact_index();
	if (!index || index == -1)
		return (false);
	print_all_contact_data(index - 1);
	return (true);
}
