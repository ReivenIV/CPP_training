/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 12:31:39 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/12 12:31:39 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

# include <iostream>

class Brain {
	private:
		std::string _ideas[100];

	public:
		~Brain();
		Brain();
		Brain(Brain const &copy);
		Brain &operator=(Brain const &instance);

		std::string get_idea(int i_idea) const;
		void		post_idea(std::string new_idea, int i_idea);
};

#endif