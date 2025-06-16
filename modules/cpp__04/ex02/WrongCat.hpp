/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 19:14:01 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/10 19:14:01 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_CLASS_HPP
# define WRONG_CAT_CLASS_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		~WrongCat();
		WrongCat();
		WrongCat(WrongCat const &copy);
		WrongCat &operator=(WrongCat const &instance);
		void makeSound() const;
};

#endif 