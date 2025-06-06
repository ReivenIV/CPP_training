/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bar.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 12:56:28 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/06 12:56:28 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bar.hpp"

Bar::Bar(){}
Bar::~Bar(){}

void Bar::test(char const c) const {
	std::cout << c << "called" << std::endl;
}
void Bar::test(int const n) const {
	std::cout << n << "called" << std::endl;

}
void Bar::test(float const z) const {
	std::cout << z << "called" << std::endl;

}
void Bar::test(Bar const & i) const {
	(void) i;
	std::cout << "'i' : called" << std::endl;

}