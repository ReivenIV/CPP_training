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

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

	private: 
		Brain *_brain;							// New

	public:
		~Dog();
		Dog();
		Dog(Dog const &copy);
		Dog &operator=(Dog const &instance);
		void makeSound() const;

		Brain &get_brain() const;				// New
};

#endif