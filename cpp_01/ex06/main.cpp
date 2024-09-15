/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:43:22 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/20 18:58:54 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int args, char **argv)
{
	Harl	karl;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (args != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}
	int i;
	for (i = 0; i < 4; i++)
	{
		if (argv[1] == levels[i])
			break ;
	}
	switch(i)
	{
		case 0 :
			karl.complain(levels[0]);
		case 1 :
			karl.complain(levels[1]);
		case 2 :
			karl.complain(levels[2]);
		case 3 :
			karl.complain(levels[3]);
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return (0);
}
