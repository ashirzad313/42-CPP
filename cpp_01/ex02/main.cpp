/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:07:59 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/18 17:33:51 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "memory address of string : " << &brain << std::endl;
	std::cout << "memory address of stringPTR : " << stringPTR << std::endl;
	std::cout << "memory address of stringREf : " << &stringREF << std::endl;

	std::cout << "value of string : " << brain << std::endl;
	std::cout << "value pointed by stringPTR : " << *stringPTR << std::endl;
	std::cout << "value pointed by stringREF : " << stringREF << std::endl;

	return (0);
}
