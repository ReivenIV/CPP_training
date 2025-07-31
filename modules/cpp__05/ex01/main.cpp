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
#include "Form.hpp"

int main(void)
{
	std::cout << "Creating Bureaucrat 'John' with grade 149..." << std::endl;
	Bureaucrat john("John", 149);

	std::cout << "\nAttempting to decrement 'John's grade..." << std::endl;
	try {
		john.decrementGrade();
	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\nCreating Form 'Form1' with invalid grades (151, 130)..." << std::endl;
	try {
		Form form1("Form1", 151, 130);
	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\nCreating Form 'Form2' with valid grades (3, 12)..." << std::endl;
	try {
		Form form2("Form2", 3, 12);
		std::cout << "Form created: " << form2 << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\nCreating Bureaucrat 'Jane' with grade 3..." << std::endl;
	Bureaucrat jane("Jane", 3);

	std::cout << "\nAttempting to sign 'Form2' with 'Jane'..." << std::endl;
	try {
		Form form3("Form3", 3, 12);
		form3.beSigned(jane);
		std::cout << "Form signed: " << form3 << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\nCreating Bureaucrat 'Alice' with grade 2..." << std::endl;
	Bureaucrat alice("Alice", 2);

	std::cout << "\nAttempting to sign 'Form3' with 'Alice' using signForm..." << std::endl;
	try {
		Form form4("Form4", 1, 12);
		alice.signForm(form4);
	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}
