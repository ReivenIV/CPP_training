/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:38:05 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/10 18:38:05 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include "Animal.hpp"

class Dog : public Animal {
	public:
		~Dog();
		Dog();
		Dog(std::string name);
		Dog(Dog const &copy);
		Dog &operator=(Dog const &instance);
		void makeSound() const;
};

#endif