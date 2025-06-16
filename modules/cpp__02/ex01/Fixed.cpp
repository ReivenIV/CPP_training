/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:22:28 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/06 16:22:28 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//* When use '='
Fixed& Fixed::operator=(Fixed const& a)
{
	std::cout << "Operator '=' called" << std::endl;
	this->fixed_point = a.getRawBits();
	return (*this);
}

//* When use '<<'
std::ostream& operator<<(std::ostream& os, Fixed const& a)
{
	os << a.toFloat();
	return (os);
}

//* Destructor
Fixed::~Fixed(){
	std::cout << "Fixed instance destroyed" << std::endl;
}

//* Default constructor
Fixed::Fixed(void) : fixed_point(0){
	std::cout << "default Fixed instance created" << std::endl;
}

//* Constructor int
/*
		n = 5 & bits = 8		2^8 = 256
		5 * 2^8 = 1280
		1280 will be saved in "fixed_point"
*/
Fixed::Fixed(const int n) {
	std::cout << "int constructor activated" << std::endl;
	this->fixed_point = n << this->bits;
}

//* Constructor float
// REMINDER: see in docs for more information (is interesting)
Fixed::Fixed(const float n) {
	std::cout << "float constructor activated" << std::endl;
	float scaled = n * (1 << this->bits);									// scaled = n * 256
	this->fixed_point = (int)(scaled + (scaled >= 0 ? 0.5f : -0.5f));		// because we can't use roundf, one way of handling is with 0.5f / -0.5f
}

//* Will copy
Fixed::Fixed(Fixed const& other){
	std::cout << "copy of instance applied" << std::endl;
	*this = other;
}

//* Getter
int Fixed::getRawBits(void) const {
	 std::cout << "getRawBits called" << std::endl; 
	 return (this->fixed_point); 
}

//* Setter
void Fixed::setRawBits(int const data) {
	 std::cout << "setRawBits called" << std::endl; 
	this->fixed_point = data;
}

/* Get original Float.
	| fixed_point = 804 || bits = 8 |
		fixed_point >> bits = 3.14
		804 / 256 = 3.14
*/
float Fixed::toFloat(void) const {
	return ((float)this->fixed_point / (1 << this->bits));  //returns float ( fixed_point / 256 )   REMINDER:"/ (1 << bits)" gives you the float value (with decimals).
}

/* Get original Int.
	| fixed_point = 804 || bits = 8 |
		fixed_point >> bits = 3
		804 / 256 = 3.14 => 3
*/
int	Fixed::toInt(void) const {
	return ((int)this->fixed_point >> this->bits); // returns int (fixed_point / 256)
}