/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 18:55:00 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/26 18:55:00 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

std::ostream &operator<<(std::ostream &os, const AForm &i) {
	os << "AForm" << i.getName() << "Grades: " << i.getGradeToSign() << " and " << i.getGradeToExec() << " status signed: " << i.getIsSigned() << "\n";
 	return os;
}

AForm::~AForm() {
	std::cout << this->getName() << ": AForm destructor called" << std::endl; 
}

AForm::AForm(): _name("Default"), _is_signed(false),  _gSign(150), _gExec(150) {
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(AForm const &i): _name(i._name), _is_signed(i._is_signed), _gSign(i._gSign), _gExec(i._gExec) {}

AForm::AForm(std::string const name, int toSign, int toExec): _name(name), _is_signed(false), _gSign(toSign), _gExec(toExec) {
	std::cout << name << ": constructor called" << std::endl;
		if (toSign < 1 || toExec < 1)
		throw Bureaucrat::GradeTooLowException();
	if (toSign > 150 || toExec > 150)
		throw Bureaucrat::GradeTooHighException();
}

// REMINDER all other values are const so we only can asign values to the non const varialbes.
AForm &AForm::operator=(AForm const &i) {
	if (this != &i)
		_is_signed = i._is_signed;
	return *this;
}

// Get
std::string const &AForm::getName() const { return _name; }
int AForm::getGradeToSign() const { return _gSign; }
int AForm::getGradeToExec() const { return _gExec; }
bool AForm::getIsSigned() const { return _is_signed; }

// Set
void AForm::setSign() { 
	if (_is_signed == true)
		throw AForm::formAlreadySigned();
	_is_signed = true;
} 

AForm &AForm::beSigned(Bureaucrat const &i){
	if (i.getGrade() >= _gSign)
		throw AForm::GradeTooLowException();

	setSign();
	return *this;
}
