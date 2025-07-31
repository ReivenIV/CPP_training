/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:47:23 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/07/01 16:47:23 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern created" << std::endl;
}

Intern::Intern(Intern const &i) {
	(void)i;			// needed otherwise we have warnings poping up
}

Intern::~Intern() {
	std::cout << "Intern fired" << std::endl;
}

Intern &Intern::operator=(Intern const &i) { 
	(void)i;			// needed otherwise we have warnings poping up
	return (*this);
}


//--------------------------------------------
//				Static functions
//--------------------------------------------

static AForm *createPresidentForm(std::string target) {
	AForm *newPresidentForm = new PresidentialPardonForm(target);
	return (newPresidentForm);
}

static AForm *createShruberryForm(std::string target) {
	AForm *newShruberryForm = new ShrubberyCreationForm(target);
	return (newShruberryForm);
}

static AForm *createRobotomyForm(std::string target) {
	AForm *newRobotomyForm = new RobotomyRequestForm(target);
	return (newRobotomyForm);
}

AForm	*Intern::makeForm(std::string formName, std::string formTarget) {
	const std::string formMenu[3] = {"presidential", "shrubbery", "robotomy"};
	AForm	*(*createForm[3])(std::string target) = {createPresidentForm, createShruberryForm, createRobotomyForm};
	int i = 0;
	while ( i < 3 ) {
		if (formMenu[i] == formName)
		{
			std::cout << "Intern sucessfully created " << formName << std::endl;
			return (createForm[i](formTarget));
		}
		i++;
	}
	throw Intern::Exception("Intern failed to create form, only accepted forms are: 'robotomy', 'presidential', 'shuberry'");
	return (NULL);
}