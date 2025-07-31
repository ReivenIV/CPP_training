/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:52:01 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/30 15:52:01 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target) {
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &i) : AForm(i), _target(i._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const { return _target; }

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &i) {
	_target = i._target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &i) const {
	if (i.getGrade() > this->getGradeToExec())
	{
		std::cout << "ERROR: " << i.getName() << std::endl;
		std::cout << "PresidentialPardonForm error: " << std::endl;
		throw AForm::GradeTooLowException();
	}
	else if (!this->getIsSigned())
	{
		std::cout << "ERROR: " << i.getName() << "not signed" << std::endl;
		throw AForm::formNotSigned();
	}
	std::cout << "Bureaucrat " << i.getName() << " executed form " << this->getName() << std::endl;
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl; 
}

std::ostream &operator<<(std::ostream &o, const PresidentialPardonForm &i) {
	o << "AForm" << i.getName() << " with grade " << i.getGradeToSign() << " & " << i.getGradeToExec() << std::endl;
	return o; 
}
