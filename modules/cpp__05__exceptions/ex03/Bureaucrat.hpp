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
#include <ostream>
#include "AForm.hpp"


class AForm;
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
		void executeForm(AForm const &form);

		// Getters
		std::string const &getName() const;
		int getGrade() const;

		// ++ / --
		void incrementGrade();
		void decrementGrade();


		// new: use of AForm
		void	signAForm(AForm &i);

		// Error handling:
		// //* REMINDER: we use "const char*" because what() return these kind of datatype.
		// class Exception : public std::exception {
		// 	private: 
		// 		const char* _msg;
		// 	public:
		// 		Exception(const char* msg): _msg(msg) {}
		// 		virtual const char *what() const throw() { return _msg; }
		// };

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
		class formAlreadySigned : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Form already signed my dear");
				}
		};
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &src);