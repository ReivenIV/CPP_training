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
		Fixed(const int n);						// New constructor
		Fixed(const float n);					// New constructor
		Fixed(Fixed const& other);				// Constructor
		Fixed & operator=(Fixed const & a);		// Assign Operator '=' to Fixed

		// Getters
		int		getRawBits(void) const;

		// Setters
		void	setRawBits(int const data);

		// Transform
		float	toFloat(void) const;			//New
		int		toInt(void) const;				//New

		
};

std::ostream& operator<<(std::ostream& os, Fixed const& a); // Assign Operator '<<' to Fixed

#endif