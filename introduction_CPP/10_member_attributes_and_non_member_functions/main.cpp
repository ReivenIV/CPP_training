/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 19:20:12 by yes_we_can            #+#    #+#             */
/*   Updated: 2025/05/29 19:20:12 by yes_we_can           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample_class.hpp"

void f0(void)
{
	Sample isntace8;
	Sample isntace9;
	
	std::cout << "Nb of instances: " << Sample::get_current_nb_instances() << std::endl;
}

void f1(void)
{
	Sample isntace6;
	Sample isntace7;
	
	std::cout << "Nb of instances: " << Sample::get_current_nb_instances() << std::endl;
	f0();

}


int	main ()
{
	Sample isntace1;
	Sample isntace2;
	Sample isntace3;
	Sample isntace4;
	Sample isntace5;
	std::cout << "Nb of instances: " << Sample::get_current_nb_instances() << std::endl;

	f1();
	return (0);
}