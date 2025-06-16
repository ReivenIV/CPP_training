/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 19:04:20 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/10 19:04:20 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_CLASS_HPP
# define WRONG_ANIMAL_CLASS_HPP

# include <iostream>

class WrongAnimal {
	protected:
		std::string _type;
	public:
		virtual ~WrongAnimal();
		WrongAnimal();
		WrongAnimal(WrongAnimal const &copy);
		WrongAnimal &operator=(WrongAnimal const &instance);
		std::string get_type() const;
		virtual void makeSound() const = 0;
};

#endif