/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 17:26:07 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/05 17:26:07 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "try again : ./harl ['DEBUG', 'INFO', 'WARNING', 'ERROR']" << std::endl;
		return (1);
	}

	std::string av1(av[1]);
	if (!av[1] || av1.empty() || (av1 != "DEBUG" && av1 != "INFO" && av1 != "WARNING" && av1 != "ERROR"))
	{
		std::cout << "try again : ./harl ['DEBUG', 'INFO', 'WARNING', 'ERROR']" << std::endl;
		return (1);
	}

	Harl the_harl;
	the_harl.complain(av[1]);
	return (0);

}