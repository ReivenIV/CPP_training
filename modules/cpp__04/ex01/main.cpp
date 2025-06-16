/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:09:15 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/11 15:09:15 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define MAGENTA "\033[0;35m"
#define RESET "\033[0m"

int main(void)
{
    std::cout << "\n\n----- CAT TEST -----\n" << std::endl;
    Cat* CAT_test = new Cat();

    CAT_test->get_brain().post_idea("Chase the laser!", 0);
    CAT_test->get_brain().post_idea("Nap in the sun.", 1);

    std::cout << "\n" << MAGENTA << "Call of get_type   : " << RESET << CAT_test->get_type() << std::endl;
    std::cout << MAGENTA << "Call of makeSound : " << RESET;
    CAT_test->makeSound();
    std::cout << MAGENTA << "Cat's ideas: " << RESET
              << CAT_test->get_brain().get_idea(0) << " | "
              << CAT_test->get_brain().get_idea(1) << std::endl;

    std::cout << "\n" << RED << "Destructor : " << YELLOW << std::endl;
    delete CAT_test;
    std::cout << RESET << "\n\n\n" << std::endl;



    std::cout << "----- DOG TEST -----\n" << std::endl;
    Dog* DOG_test = new Dog();

    DOG_test->get_brain().post_idea("Fetch the stick!", 0);
    DOG_test->get_brain().post_idea("Dig a hole.", 1);

    std::cout << "\n" << MAGENTA << "Call of get_type   : " << RESET << DOG_test->get_type() << std::endl;
    std::cout << MAGENTA << "Call of makeSound : " << RESET;
    DOG_test->makeSound();
    std::cout << MAGENTA << "Dog's ideas: " << RESET
              << DOG_test->get_brain().get_idea(0) << " | "
              << DOG_test->get_brain().get_idea(1) << std::endl;

    std::cout << "\n" << RED << "Destructor : " << YELLOW << std::endl;
    delete DOG_test;
    std::cout << RESET << "\n\n\n" << std::endl;

    return 0;
}