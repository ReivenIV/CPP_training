/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:01:35 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/30 17:01:35 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target) {
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &i) : AForm(i), _target(i._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const { return _target; }

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &i) {
	_target = i._target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &i) const {
	if (i.getGrade() > this->getGradeToExec())
	{
		std::cout << "ERROR: " << i.getName() << std::endl;
		std::cout << "RobotomyRequestForm error: " << std::endl;
		throw AForm::GradeTooLowException();
	}
	else if (!this->getIsSigned())
	{
		std::cout << "ERROR: " << i.getName() << "not signed" << std::endl;
		throw AForm::formNotSigned();
	}
	std::cout << "Bureaucrat " << i.getName() << " executed form " << this->getName() << std::endl;

	std::cout << "🤖 ####?.:;, ##RRRR ~~~^$%$€##{[]} 🤖" << std::endl;
	srand(time(NULL));
	if (rand() % 2 == 0) 
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->getTarget() << " robotomy failed robotomization" << std::endl;
}

std::ostream &operator<<(std::ostream &o, const RobotomyRequestForm &i) {
	o << "AForm" << i.getName() << " with grade " << i.getGradeToSign() << " & " << i.getGradeToExec() << std::endl;
	return o; 
}