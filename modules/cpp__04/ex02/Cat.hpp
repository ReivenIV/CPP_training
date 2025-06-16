/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:29:18 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/10 18:29:18 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain *_brain;							// new

	public:	
		~Cat();
		Cat();
		Cat(Cat const &copy);
		Cat &operator=(Cat const &instance);
		void makeSound() const;

		Brain &get_brain() const;				// new
};

#endif