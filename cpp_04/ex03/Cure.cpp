/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:41:21 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/29 15:55:41 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure	(void) : AMateria("cure")
{
	std::cout << "Cure constrcutor called" << std::endl;
}

Cure::Cure(Cure const &copy) : AMateria(copy)
{
	std::cout << "Cure copy constrcutor called" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Cure destroyed" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
	std::cout << "Cure assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_type = other._type;
	return (*this);
}

AMateria *Cure::clone(void)const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
