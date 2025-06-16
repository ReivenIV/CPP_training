/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:57:20 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/11 14:57:20 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_DOG_CLASS_HPP
# define WRONG_DOG_CLASS_HPP

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {
	public:
		~WrongDog();
		WrongDog();
		WrongDog(WrongDog const &copy);
		WrongDog &operator=(WrongDog const &instance);
		void makeSound() const;
};

#endif