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
		~Fixed();
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(Fixed const& other);
		Fixed & operator=(Fixed const & a);

		// Getters
		int		getRawBits(void) const;

		// Setters
		void	setRawBits(int const data);

		// Transform
		float	toFloat(void) const;
		int		toInt(void) const;

		// ex02
		bool	operator>(Fixed const& a) const;
		bool	operator<(Fixed const& a) const;
		bool	operator>=(Fixed const& a) const;
		bool	operator<=(Fixed const& a) const;
		bool	operator==(Fixed const& a) const;
		bool	operator!=(Fixed const& a) const;

		Fixed	operator+(Fixed const& a) const;
		Fixed	operator-(Fixed const& a) const;
		Fixed	operator*(Fixed const& a) const;
		Fixed 	operator/(Fixed const& a) const;

		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);

		static	Fixed const&	min(Fixed const& a, Fixed const& b);
		static	Fixed const&	max(Fixed const& a, Fixed const& b);
		static	Fixed&			min(Fixed& a, Fixed& b);
		static	Fixed&			max(Fixed& a, Fixed& b);
};

std::ostream& operator<<(std::ostream& os, Fixed const& a);

#endif