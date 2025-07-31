/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 10:00:00 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/27 10:00:00 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {

	// // std::cout << "=== Testing ShrubberyCreationForm ===" << std::endl;
	// // try {
	// // 	Bureaucrat john("John", 3);
	// // 	ShrubberyCreationForm shrubbery("Garden");

	// // 	std::cout << "Signing ShrubberyCreationForm..." << std::endl;
	// // 	shrubbery.beSigned(john);

	// // 	std::cout << "Executing ShrubberyCreationForm..." << std::endl;
	// // 	john.executeForm(shrubbery);
	// // } catch (std::exception &e) {
	// // 	std::cerr << "Exception: " << e.what() << std::endl;
	// // }

	std::cout << "\n\n\n=== Testing RobotomyRequestForm ===" << std::endl;
	try {
		Bureaucrat jane("Jane", 45);
		RobotomyRequestForm robotomy("Robot");

		std::cout << "Signing RobotomyRequestForm..." << std::endl;
		robotomy.beSigned(jane);

		std::cout << "Executing RobotomyRequestForm..." << std::endl;
		jane.executeForm(robotomy);
	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	// // std::cout << "\n\n\n=== Testing PresidentialPardonForm ===" << std::endl;
	// // try {
	// // 	Bureaucrat alice("Alice", 5);
	// // 	PresidentialPardonForm pardon("Bob");

	// // 	std::cout << "Signing PresidentialPardonForm..." << std::endl;
	// // 	pardon.beSigned(alice);

	// // 	std::cout << "Executing PresidentialPardonForm..." << std::endl;
	// // 	alice.executeForm(pardon);
	// // } catch (std::exception &e) {
	// // 	std::cerr << "Exception: " << e.what() << std::endl;
	// // }


	//* Testing Errors: 
	// // std::cout << "\n\n\n=== Testing Invalid Cases ===" << std::endl;
	// // try {
	// // 	Bureaucrat lowRank("LowRank", 150);
	// // 	ShrubberyCreationForm invalidForm("InvalidGarden");

	// // 	std::cout << "Attempting to sign with insufficient grade..." << std::endl;
	// // 	invalidForm.beSigned(lowRank);
	// // } catch (std::exception &e) {
	// // 	std::cerr << "Exception: " << e.what() << std::endl;
	// // }

	// // try {
	// // 	Bureaucrat lowRank("normal", 144);
	// // 	ShrubberyCreationForm invalidForm("TestGarden");

	// // 	std::cout << "Attempting to sign with insufficient grade..." << std::endl;
	// // 	invalidForm.beSigned(lowRank);
	// // } catch (std::exception &e) {
	// // 	std::cerr << "Exception: " << e.what() << std::endl;
	// // }

	// // try {
	// // 	Bureaucrat highRank("HighRank", 1);
	// // 	RobotomyRequestForm unsignedForm("UnsignedRobot");

	// // 	std::cout << "Attempting to execute an unsigned form..." << std::endl;
	// // 	highRank.executeForm(unsignedForm);
	// // } catch (std::exception &e) {
	// // 	std::cerr << "Exception: " << e.what() << std::endl;
	// // }

	return 0;
}