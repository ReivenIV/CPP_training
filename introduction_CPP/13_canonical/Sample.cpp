/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:16:29 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/06 13:16:29 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

Sample::Sample(void) : _foo(0) {}
Sample::Sample(int const n) : _foo(n) {}
Sample::~Sample(){}

Sample::Sample(Sample const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

int	Sample::getFoo(void) const { return this->_foo; }

Sample & Sample::operator=(Sample const & rhs)
{
	std::cout << "Assignment operator called" << std::endl;

	if (this != &rhs)
		this->_foo = rhs.getFoo();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Sample const & i)
{
	o << "The value of _foo is: " << i.getFoo();
	return o;
}
