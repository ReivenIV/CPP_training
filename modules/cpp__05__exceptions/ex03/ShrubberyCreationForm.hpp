/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:46:30 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/30 16:46:30 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	private:
		std::string _target;

	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &i);
		~ShrubberyCreationForm();
		std::string getTarget() const;
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &i);
		void execute(Bureaucrat const &i) const;
};

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &i);