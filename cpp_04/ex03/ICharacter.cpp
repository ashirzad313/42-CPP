/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:57:24 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/29 16:36:17 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter	(void)
{
	std::cout << "ICharacter constructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &copy)
{
	std::cout << "ICharacter copy constructor called" << std::endl;
	*this = copy;
}

ICharacter &ICharacter::operator=(const ICharacter &other)
{
	std::cout << "ICharacter assignment operator called" << std::endl;
	(void)other;
	return (*this);
}
