/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:08:31 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/20 17:05:40 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include "unistd.h"
#include <iomanip>

void	send_line(std::string line, std::ofstream &outfile, char **argv)
{
	unsigned long	pos = 0;
	for (int i = 0; i < (int)line.size(); i++)
	{
		pos = line.find(argv[2], i);
		if (pos != std::string::npos && pos == (unsigned long)i)
		{
			outfile << argv[3];
			i += (int)std::string(argv[2]).size() - 1;
		}
		else
			outfile << line[i];
	}
}

int	main(int args, char **argv)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		line;

	if (args != 4)
	{
		std::cout << "<filename> <s1> <s2>" << std::endl;
		return (1);
	}
	infile.open(argv[1]);
	outfile.open("file_replace");
	if (!infile || !outfile)
	{
		std::cout << "no such file in directory" << std::endl;
		return (1);
	}
	while (getline(infile, line))
		send_line(line + "\n", outfile, argv);
	infile.close();
	outfile.close();
	return (0);
}
