/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:23:49 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/10 17:23:49 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include <iostream>

class Animal {
	protected:
		std::string _type;

	public:
		Animal();
		virtual ~Animal();
		Animal(Animal const &copy);
		Animal &operator=(Animal const &instance);
		std::string get_type() const;
		virtual void  makeSound() const = 0;			// pure virtual function type (check in doc)
};

#endif