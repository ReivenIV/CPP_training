/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:15:38 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/06 16:15:38 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed
{
	private:
		int	fixed_point;
		static const int bits = 8;

	public:
		~Fixed();								// Destructor
		Fixed();								// Constructor
		Fixed(Fixed const& other);				// Constructor
		Fixed & operator=(Fixed const & a);		// Assign Operator '=' to Fixed
		int		getRawBits(void) const;
		void	setRawBits(int const data);

};

std::ostream& operator<<(std::ostream& os, Fixed const& a);

#endif