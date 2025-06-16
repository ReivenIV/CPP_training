/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 12:37:09 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/12 12:37:09 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "🧠   Brain constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "🧠   Brain destructor called" << std:: endl;
}

Brain::Brain(Brain const &copy) { *this = copy; }

Brain &Brain::operator=(Brain const &instance) {
	if (this != &instance)							// Will check self-assignment case exemple : "Brain a; a = a;"
	{
		int i = 0;
		while (i < 100)
		{
			_ideas[i] = instance._ideas[i];
			i++;
		}
	}
	return (*this);
}

std::string Brain::get_idea(int i_idea) const {
	if (i_idea >= 0 && i_idea < 100)
		return (_ideas[i_idea]);
	return (_ideas[0]);
}

void	Brain::post_idea(std::string new_idea, int i_idea) {
	if (i_idea >= 0 && i_idea < 100)
		_ideas[i_idea] = new_idea;
}
