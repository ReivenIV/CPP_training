/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:21:07 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/26 17:21:07 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
#include <ostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		std::string const _name;
		bool _is_signed;			// defaut to false
		int const _gSign;			// grade to sign
		int const _gExec;			// grade to execute

	public:
		// Canonical: 
		~Form();
		Form();
		Form(std::string const name, int toSign, int toExec);
		Form(Form const &copy);
		Form &operator=(Form const &i);

		// Getters:
		std::string const &getName() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		bool getIsSigned() const;
		
		// Set
		void setSign();
		
		// Foo
		Form &beSigned(Bureaucrat const &i);

		// Error handling:
		// // class Exception : public std::exception {
		// // 	private: 
		// // 		const char *_msg;

		// // 	public:
		// // 		Exception(const char* msg): _msg(msg) {}
		// // 		virtual const char *what() const throw() { return _msg; }
		// // };
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

std::ostream &operator<<(std::ostream &flux, Form const &i);
