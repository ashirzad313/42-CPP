/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:14:19 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/28 14:21:30 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat default constrcutor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal()
{
	std::cout << "WrongCat copy constrcutor called" << std::endl;
	*this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_type = other._type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound(void)const
{
	std::cout << this->getType() << " says wrong" << std::endl;
}
