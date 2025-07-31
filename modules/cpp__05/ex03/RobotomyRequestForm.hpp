/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:01:04 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/30 17:01:04 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string _target;

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &i);
		~RobotomyRequestForm();
		std::string getTarget() const;
		RobotomyRequestForm &operator=(RobotomyRequestForm const &i);
		void execute(Bureaucrat const &i) const;
};

std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &i);