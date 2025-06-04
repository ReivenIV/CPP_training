/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample_class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 19:17:20 by yes_we_can            #+#    #+#             */
/*   Updated: 2025/05/29 19:17:20 by yes_we_can           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample_class.hpp"

int Sample::_nb_instances = 0;

Sample::Sample(void)
{
	std::cout << "Constructor called " << std::endl;
	Sample::_nb_instances += 1;

	return ;
}

Sample::~Sample(void)
{
	std::cout << "destructor called " << std::endl;
	Sample::_nb_instances -= 1;

	return ;
}

int	Sample::get_current_nb_instances(void)
{
	return Sample::_nb_instances;
}

