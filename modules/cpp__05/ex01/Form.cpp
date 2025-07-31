/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 18:55:00 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/26 18:55:00 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::ostream &operator<<(std::ostream &os, const Form &i) {
	os << "Form" << i.getName() << "Grades: " << i.getGradeToSign() << " and " << i.getGradeToExec() << " status signed: " << i.getIsSigned() << "\n";
 	return os;
}

Form::~Form() {
	std::cout << this->getName() << ": Form destructor called" << std::endl; 
}

Form::Form(): _name("Default"), _is_signed(false),  _gSign(150), _gExec(150) {
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(Form const &i): _name(i._name), _is_signed(i._is_signed), _gSign(i._gSign), _gExec(i._gExec) {}

Form::Form(std::string const name, int toSign, int toExec): _name(name), _is_signed(false), _gSign(toSign), _gExec(toExec) {
	std::cout << name << ": constructor called" << std::endl;
		if (toSign < 1 || toExec < 1)
		throw Bureaucrat::GradeTooLowException();
	if (toSign > 150 || toExec > 150)
		throw Bureaucrat::GradeTooHighException();
}

// REMINDER all other values are const so we only can asign values to the non const varialbes.
Form &Form::operator=(Form const &i) {
	if (this != &i)
		_is_signed = i._is_signed;
	return *this;
}

// Get
std::string const &Form::getName() const { return _name; }
int Form::getGradeToSign() const { return _gSign; }
int Form::getGradeToExec() const { return _gExec; }
bool Form::getIsSigned() const { return _is_signed; }

// Set
void Form::setSign() { 
	if (_is_signed == true)
		throw Form::formAlreadySigned();
	_is_signed = true;
} 

Form &Form::beSigned(Bureaucrat const &i){
	if (i.getGrade() >= _gSign)
		throw Form::GradeTooLowException();
	setSign();
	return *this;
}
