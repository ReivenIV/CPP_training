/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:32:19 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/05/30 18:27:52 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook_class.hpp"

int main(void)
{
    Phonebook Phonebook;
    std::string input;
    print_header();
    
    while (1)
    {
        std::cout << "$ ➔ ";   
        if (!(std::getline(std::cin, input)))
            return(0);
        else if (input == "ADD")
                Phonebook.handler_add_contact();
        else if (input == "SEARCH")
                Phonebook.handler_get_contact();
        else if (input == "CLEAR")
                print_header();
        else if (input == "EXIT")
            return (0);
        else
            std::cout << "\033[34m TRY : ADD, SEARCH, EXIT, CLEAR. \033[0m" << std::endl;
    }
    return 0;
}