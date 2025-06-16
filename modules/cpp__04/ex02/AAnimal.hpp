/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:23:49 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/10 17:23:49 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_CLASS_HPP
# define AAnimal_CLASS_HPP

# include <iostream>

class AAnimal {
	protected:
		std::string _type;

	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(AAnimal const &copy);
		AAnimal &operator=(AAnimal const &instance);
		std::string get_type() const;
		virtual void  makeSound() const = 0;			// pure virtual function type (check in doc)
};

#endif