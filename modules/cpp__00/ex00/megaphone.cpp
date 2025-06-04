/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:22:24 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/04 16:22:24 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int i = 1;
	int j = 0;

	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (av[i] != NULL)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			av[i][j] = toupper(av[i][j]);
			std::cout << av[i][j];
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);	
}