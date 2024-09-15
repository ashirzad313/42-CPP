/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:50:29 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/29 16:25:46 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria	(std::string const &type)
{
	std::cout << "AMateria " << type << " created" << std::endl;
	this->_type = type;
}

AMateria::AMateria	(AMateria const &copy)
{
	std::cout << "AMateria copy constrcutor called" << std::endl;
	*this = copy;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destroyed" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	std::cout << "AMateria assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_type = other._type;
	return (*this);
}

std::string const &AMateria::getType(void)const
{
	return (this->_type);
}
