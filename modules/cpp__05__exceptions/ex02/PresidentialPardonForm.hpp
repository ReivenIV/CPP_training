/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:48:58 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/30 15:48:58 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		std::string _target;

	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &i);
		~PresidentialPardonForm();
		std::string getTarget() const;
		PresidentialPardonForm &operator=(PresidentialPardonForm const &i);
		void execute(Bureaucrat const &i) const;
};

std::ostream &operator<<(std::ostream &ostream, const PresidentialPardonForm &i);