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

// This function asks the user to enter some information, and keeps asking until the input is not empty.
static std::string hear_input_data(std::string title)
{
	bool flag = 0;
	std::string user_input;
	std::string str_len;
	size_t i = 0;
	while ( i < (16 - title.length()))															// Add spaces so the prompt is aligned and cute
	{
		str_len += " ";
		i++;
	}
	std::cout << title << str_len << "➔ ";														// Print the prompt with spaces and an arrow
	if (!(std::getline(std::cin, user_input)))													// Get user_input from user, check for error or EOF
		return ("");																			// If error, return empty string

	while (!(user_input.length()) || (title == "NUMBER" && !str_is_numbers(user_input)))		// While user_input is empty
	{
		if (flag != 0)																			//flag is only used in case we never reached to go in the while loop.
			std::cout << "\033[1A\033[K";						
		flag = 1;									  			
		std::cout << "\033[1A\033[K";															// Move cursor up and clear line again
		std::cout <<"\033[35m" << title << str_len << "➔  \033[0m";								// Print the prompt again
		std::cout << "❌   MISSING " << title <<  " FIELD " << std::endl;						// Tell user user_input was empty
		std::cout << "AGAIN PLEASE    ➔ ";														// Ask user to retry
		user_input = "";																		// Clear user_input
		if (!(std::getline(std::cin, user_input)))												// Get user_input again, check for error or EOF
			return ("");
	}
	if (flag != 0)
		std::cout << "\033[1A\033[K";
	std::cout << "\033[1A\033[K";
	std::cout <<"\033[35m" << title << str_len << "➔ " << user_input << " 🌻 \033[0m" << std::endl;	// Print the prompt and the user_input
	return(user_input);																				// Return the user's user_input
}

//* Will shift all the contacts 1 step to the end to make space for the incoming contact.
// The loop will shift all the contacts and then we overwrite everything to "" for the first contact.
void Phonebook::erase_contact_and_shift_down() {
	int i = MAX_AMOUNT_CONTACTS - 1;	
    while (i > 0) {
        _contact[i] = _contact[i - 1];
        _contact[i].set_id(i);
		i--;
    }
    // Clear the top contact (index 0) for new data
    _contact[0].set_first_name("");
    _contact[0].set_last_name("");
    _contact[0].set_nickname("");
    _contact[0].set_number("");
    _contact[0].set_secret("");
    _contact[0].set_id(0);
}

bool Phonebook::has_Phonebook_space() {
    if (Phonebook::_contact_id == MAX_AMOUNT_CONTACTS) {
        std::string input;
        std::cout << "Phonebook limit reached. Adding a new contact will erase the last." << std::endl;
        std::cout << "READY ? (Y/N) ➔ ";
        if (!(std::getline(std::cin, input)))
            return (false);
        bool start = 0;
        while (input.length() == 0 || ((input != "Y") && (input != "N"))) {
            if (start != 0)
                std::cout << "\033[1A\033[K";
            start = 1;
            std::cout << "\033[1A\033[K";
            std::cout << "READY ? (Y/N) ➔ ";
            std::cout << "  TRY AGAIN. " << std::endl;
            std::cout << "AGAIN PLEASE           ➔ ";
            input = "";
            if (!(std::getline(std::cin, input)))
                return (false);
        }
        if (input == "N") {
            std::cout << "MSG RECEIVED !" << std::endl;
            return (false);
        }
        else if (input == "Y") {
            erase_contact_and_shift_down();
            return (true);
        }
    }
    return (true);
}


bool Phonebook::handler_add_contact()
{
    std::string input;

    if (!has_Phonebook_space())															//  In case we arrived to the max amount of contacts we ask user and if yes we shift all contacts and we erase the first one 
        return (false);

    print_header();
    std::cout << "\033[91m\n 🤘  ++++++  NEW CONTACT  ++++++  🤘 \033[0m\n\n\n";

    int current_id = (_contact_id == MAX_AMOUNT_CONTACTS) ? 0 : _contact_id;			// if _contact_id reached the max it means we already shifted the contacts and now on we will inputing data only at index 0.

    if ((input = hear_input_data("FIRST NAME")).empty())
        return (false);
    _contact[current_id].set_first_name(input);

    if ((input = hear_input_data("LAST NAME")).empty())
        return (false);
    _contact[current_id].set_last_name(input);

    if ((input = hear_input_data("NICKNAME")).empty())
        return (false);
    _contact[current_id].set_nickname(input);

    if ((input = hear_input_data("NUMBER")).empty())
        return (false);
    _contact[current_id].set_number(input);

    if ((input = hear_input_data("DARKEST SECRET")).empty())
        return (false);
    _contact[current_id].set_secret(input);

    _contact[current_id].set_id(current_id);

    if (_contact_id < MAX_AMOUNT_CONTACTS)
        Phonebook::_contact_id++;

    std::cout << "\033[35m \n CONTACT CREATED   🐣 \033[0m" << std::endl;
	std::cout << "\033[35m Phonebook updated 🐣 \033[0m" << std::endl;
	print_phonebook();
	std::cout << "\n" << std::endl;
    return (true);
}
