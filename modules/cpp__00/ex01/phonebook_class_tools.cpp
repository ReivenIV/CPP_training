/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:24:49 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/05/30 18:32:33 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook_class.hpp"

Phonebook::Phonebook() {_contact_id = 0; }		// constructor + set number_of_contact to 0
Phonebook::~Phonebook(){}						// destructor

int xs_atoi(std::string inputed_str)
{
	int i = 0;
	int n = 0;
	if (!str_is_numbers(inputed_str))
		return (-1);
	while (inputed_str[i])
	{
		n = n * 10 + inputed_str[i] - '0';
		i++;
	}
	return (n);
}

bool str_is_numbers(std::string str_nb)
{
	int i = 0;

	if (str_nb.empty())
		return (false);
	while (str_nb[i])
	{
		if (str_nb[i] < '0' || str_nb[i] > '9')
			return (false);
		i++;
	}
	return (true);
}
