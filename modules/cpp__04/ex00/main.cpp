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
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define MAGENTA "\033[0;35m"
#define RESET "\033[0m"

int main(void)
{


    std::cout << "\n\n----- ANIMAL TEST -----\n" << std::endl;
    std::cout << GREEN << "Constructor : " << YELLOW << std::endl;
   
    Animal* ANIMAL_test = new Animal();

    std::cout << "\n" << MAGENTA << "Call of get_type   : " << RESET << ANIMAL_test->get_type() << std::endl;
    std::cout << MAGENTA << "Call of makeSound : " << RESET;
    ANIMAL_test->makeSound();
    
    std::cout << "\n" << RED << "Destructor : " << YELLOW << std::endl;
    delete ANIMAL_test;
    std::cout << RESET << "\n\n\n" << std::endl;

    std::cout << "\n\n----- CAT TEST -----\n" << std::endl;
    std::cout << GREEN << "Constructor : " << YELLOW << std::endl;
   
    Animal* CAT_test = new Cat();

    std::cout << "\n" << MAGENTA << "Call of get_type   : " << RESET << CAT_test->get_type() << std::endl;
    std::cout << MAGENTA << "Call of makeSound : " << RESET;
    CAT_test->makeSound();
    
    std::cout << "\n" << RED << "Destructor : " << YELLOW << std::endl;
    delete CAT_test;
    std::cout << RESET << "\n\n\n" << std::endl;
    

    std::cout << "----- DOG TEST -----\n" << std::endl;
    std::cout << GREEN << "Constructor : " << YELLOW << std::endl;
    Animal* DOG_test = new Dog();
    
    std::cout << "\n" << MAGENTA << "Call of get_type   : " << RESET << DOG_test->get_type() << std::endl;
    
    std::cout << MAGENTA << "Call of makeSound : " << RESET;
    DOG_test->makeSound();
    
    std::cout << "\n" << RED << "Destructor : " << YELLOW << std::endl;
    delete DOG_test;
    std::cout << RESET << "\n\n\n" << std::endl;


    std::cout << "----- WRONG_CAT TEST -----\n" << std::endl;
    std::cout << GREEN << "Constructor : " << YELLOW << std::endl;
    WrongAnimal* Wrong_CAT = new WrongCat();
    
    std::cout << "\n" << MAGENTA << "Call of get_type   : " << RESET << Wrong_CAT->get_type() << std::endl;

    
    std::cout << MAGENTA << "Call of makeSound : " << RESET;
    Wrong_CAT->makeSound();
    
    std::cout << "\n" << RED << "Destructor : " << YELLOW << std::endl;
    delete Wrong_CAT;
    std::cout << RESET << std::endl;

    return (0);
}