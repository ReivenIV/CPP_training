/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 16:24:14 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/26 16:24:14 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(const Bureaucrat &instance): _name(instance._name), _grade(instance._grade) {}
std::string const &Bureaucrat::getName() const { return _name; }
int Bureaucrat::getGrade() const { return _grade; }

/*
	<< operator
	REMINDER : we return "os" because like that we can chain for exemple: 
	"" std::cout << b1 << b2 << std::endl; ""
*/
std::ostream &operator<<(std::ostream &os, const Bureaucrat &i) {
	os << i.getName() << ", bureaucrat grade " << i.getGrade() << ".";
 	return os;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat " << this->getName() << " ERASED" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
	std::cout << "new Bureaucrat created, named: " << name << ", grade: " << _grade << "." << std::endl;
}

//* REMINDER :  Will copy only the grade and not the name
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &instance) {
	_grade = instance._grade;
	return (*this);
}



void Bureaucrat::incrementGrade() {
	if (_grade != 1)
		_grade--;
	else
		throw Bureaucrat::GradeTooLowException();
	std::cout << this->getName() << ": current grade is : " << _grade << std::endl;
}

void Bureaucrat::decrementGrade() {
	if (_grade != 150)
		_grade++;
	else
		throw Bureaucrat::GradeTooHighException();
	std::cout << this->getName() << ": current grade is : " << _grade << std::endl;
}

