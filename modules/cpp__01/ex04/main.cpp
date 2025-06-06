/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 14:42:50 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/05 14:42:50 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

bool xs_parsing(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "./placer [filename] [target string to chage] [string to replace with]" << std::endl;
		return (1);
	}

	std::string av1(av[1]);
	std::string av2(av[2]);
	std::string av3(av[3]);
	if (av1.empty() || av2.empty() || av3.empty())
	{
		std::cout << "Empty strings" << std::endl;
		return (false);
	}
	if (av2 == av3)
	{
		std::cout << "strings are the same" << std::endl;
		return (false);
	}
	return (true);
}

bool can_we_open_files(std::ifstream &inputed_file, std::ofstream &output_file)
{
	if (!inputed_file.is_open())
	{
		std::cout << "Could not open inputed file" << std::endl;
		return (false);
	}
	if (!output_file.is_open())
	{
		std::cout << "could not open output file." << std::endl;
		inputed_file.close();
		return (false);
	}
	return (true);
}

int	main(int ac, char **av)
{
	std::string av1(av[1]);
	std::string av2(av[2]);					// target to be changed
	std::string av3(av[3]);					// string to replace target
	if (!xs_parsing(ac, av))
		return (1);
	
	std::ifstream inputed_file(av[1]);
	std::ofstream output_file((av1 + ".replace").c_str());
	if (!can_we_open_files(inputed_file, output_file))
		return (1);

	std::string line;
	std::size_t av2_length = av2.length();
	bool target_founded_flag = false;

	while (getline(inputed_file, line))
	{
		std::size_t pos = 0;
		while((pos = line.find(av2, pos)) != std::string::npos)
		{
			line.erase(pos, av2_length);
			line.insert(pos, av3);
			pos += av3.length();
			target_founded_flag = true;
		}

		output_file << line << "\n";
	}
	
	inputed_file.close();

	if (!target_founded_flag)
	{
		output_file.close();
		std::remove((av1 + ".replace").c_str());
		std::cout << "not match in file" << std::endl;
		return (1);
	}
	
	output_file.close();
	std::cout << "thanks for using replace dear" << std::endl;
	return (0);
}