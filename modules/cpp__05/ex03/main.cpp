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
#include "Intern.hpp"


int main(void) {
	try{
		Bureaucrat Big_Bob_Moustache("Big_Bob_Moustache", 10);
		Intern		internStan;
		AForm 		*rrf;

		rrf = internStan.makeForm("robotomy", "Robocop_case");
		Big_Bob_Moustache.signAForm(*rrf);
		rrf->execute(Big_Bob_Moustache);

		delete rrf;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}