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

Fixed& Fixed::operator=(Fixed const& a)
{
	std::cout << "Operator '=' called" << std::endl;
	this->fixed_point = a.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, Fixed const& a)
{
	os << a.getRawBits();
	return (os);
}

Fixed::~Fixed(){
	std::cout << "Fixed instance destroyed" << std::endl;
}
Fixed::Fixed(void) : fixed_point(0){ std::cout << "default Fixed instance created" << std::endl; }
Fixed::Fixed(Fixed const& other){
	std::cout << "copy of instance applied" << std::endl;
	*this = other;
}

int Fixed::getRawBits(void) const {
	 std::cout << "getRawBits called" << std::endl; 
	 return (this->fixed_point); 
}
void Fixed::setRawBits(int const data) {
	 std::cout << "setRawBits called" << std::endl; 
	this->fixed_point = data;
}
