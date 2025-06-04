/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:49:49 by yes_we_can              #+#    #+#             */
/*   Updated: 2025/05/29 18:49:49 by yes_we_can             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample_class.hpp"

int	main()
{
	Sample instance1 (42);
	Sample instance2 (42);

	std::cout << "Instance2 memory addresse is : "<< &instance2 << std::endl;

	// is going to be false because they have different addresse memory in the ram.
	if (&instance1 == &instance2)
		std::cout << "physically equal" << std::endl;
	else
		std::cout << "not physically equal" << std::endl;

	return (0);
}