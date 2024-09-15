/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:49:19 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/29 16:35:27 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice	(void) : AMateria("ice")
{
	std::cout << "Ice constrcutor called" << std::endl;
}

Ice::Ice	(Ice const &copy) : AMateria(copy)
{
	std::cout << "Ice copy constrcutor called" << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
	std::cout << "Ice assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_type = other._type;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice destroued" << std::endl;
}

AMateria *Ice::clone(void)const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
