/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:42:03 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/07/01 16:42:03 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <iostream>
#include <exception>


class Intern
{
	public:
		~Intern();
		Intern();
		Intern(Intern const &i);
		Intern	&operator=(Intern const &i);
		AForm	*makeForm(std::string formName, std::string formTarget);
		class Exception : public std::exception {
			private: 
				const char* _msg;
			public:
				Exception(const char* msg): _msg(msg) {}
				virtual const char *what() const throw() { return _msg; }
		};
};

//std::ostream	&operator<<(std::ostream &os, const Intern &i);