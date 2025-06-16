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
Fixed::~Fixed(){}

//* Default constructor
Fixed::Fixed(void) : fixed_point(0){}

//* Constructor int
/*
		n = 5 & bits = 8		2^8 = 256
		5 * 2^8 = 1280
		1280 will be saved in "fixed_point"
*/
Fixed::Fixed(const int n) {
	this->fixed_point = n << this->bits;
}

//* Constructor float
// REMINDER: see in docs for more information (is interesting)
Fixed::Fixed(const float n) {
	float scaled = n * (1 << this->bits);									// scaled = n * 256
	this->fixed_point = (int)(scaled + (scaled >= 0 ? 0.5f : -0.5f));		// because we can't use roundf, one way of handling is with 0.5f / -0.5f
}

//* Will copy
Fixed::Fixed(Fixed const& other){ *this = other; }

//* Getter
int Fixed::getRawBits(void) const {
	 return (this->fixed_point); 
}

//* Setter
void Fixed::setRawBits(int const data) {
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
	return ((int)this->fixed_point >> this->bits); 			// returns int (fixed_point / 256)
}



// ---------------
//    #########
//    # ex 02 #
//    #########
// ---------------



//* >,  >=,  <,  <=
bool Fixed::operator>(Fixed const& a) const {
	if (this->fixed_point > a.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<(Fixed const& a) const {
	if (this->fixed_point < a.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(Fixed const& a) const {
	if (this->fixed_point >= a.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(Fixed const& a) const {
	if (this->fixed_point <= a.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(Fixed const& a) const {
	if (this->fixed_point == a.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(Fixed const& a) const {
	if (this->fixed_point != a.getRawBits())
		return (true);
	return (false);
}





//* +,  -,  /,  *
// REMINDER : In case you wonder why we create an extra instance check "why_extra_instance.md" documentation.
Fixed Fixed::operator+(Fixed const& a) const {
	Fixed tmp_instance;
	tmp_instance.setRawBits(this->fixed_point + a.fixed_point);
	return (tmp_instance);
}

Fixed Fixed::operator-(Fixed const& a) const {
	Fixed tmp_instance;
	tmp_instance.setRawBits(this->fixed_point - a.fixed_point);
	return (tmp_instance);
}

Fixed Fixed::operator*(Fixed const& a) const {
	Fixed tmp_instance;
	tmp_instance.setRawBits((this->fixed_point * a.fixed_point) >> bits);		// Shift left before dividing to preserve precision
	return (tmp_instance);
}

Fixed Fixed::operator/(Fixed const& a) const {
	Fixed tmp_instance;
	tmp_instance.setRawBits((this->fixed_point << bits) / a.fixed_point);		// Multiply the raw values and shift back by 'bits'
	return (tmp_instance);
}

//* ++a, a++, --a, a--
// a++
Fixed& Fixed::operator++(void){
	this->fixed_point += 1;
	return (*this);
}

// ++a
Fixed Fixed::operator++(int){
	Fixed tmp_instance(*this);
	this->fixed_point += 1;
	return (tmp_instance);
}

// a--
Fixed& Fixed::operator--(void){
	this->fixed_point -= 1;
	return (*this);
}

// --a
Fixed Fixed::operator--(int){
	Fixed tmp_instance(*this);
	this->fixed_point -= 1;
	return (tmp_instance);
}


Fixed const& Fixed::max(Fixed const& a, Fixed const& b){
	if (a.fixed_point > b.fixed_point)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
	if (a.fixed_point > b.fixed_point)
		return (a);
	return (b);
}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b){
	if (a.fixed_point < b.fixed_point)
		return (a);
	return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
	if (a.fixed_point < b.fixed_point)
		return (a);
	return (b);
}