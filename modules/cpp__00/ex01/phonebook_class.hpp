/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:32:36 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/05/30 18:27:52 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Phonebook_CLASS_H
# define Phonebook_CLASS_H

# include <iostream>
# include <iomanip>
# include "contact_class.hpp"

bool	str_is_numbers(std::string str_nb);
int		xs_atoi(std::string inputed_str);
void	print_header(void);

class Phonebook
{
	public:
		static const int MAX_AMOUNT_CONTACTS = 8;
		Phonebook();
		~Phonebook();
		bool	handler_add_contact();
		bool	handler_get_contact();
		void	print_all_contact_data(int _contact_id);
		void	print_phonebook(void) const;
		bool	has_Phonebook_space();
		int 	get_contact_index();
		void	erase_contact_and_shift_down();

	private:
		int 	_contact_id;								// Will we used to track and move contacts in the phonebook
		Contact _contact[MAX_AMOUNT_CONTACTS];				// Will be each object of information for each contact.
};

#endif