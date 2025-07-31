/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:57:41 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/26 15:57:41 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

class Bureaucrat
{
	private: 
		std::string const _name;
		int _grade;

	public:
		//Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &copy);
		Bureaucrat &operator=(Bureaucrat const &instance);

		// Getters
		std::string const &getName() const;
		int getGrade() const;

		// ++ / --
		void incrementGrade();
		void decrementGrade();

		// Error handling:
		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("grade too high my dear !");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("grade too low my dear !");
				}
		};
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &src);