/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:27:50 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/28 13:53:49 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->_type = "Cat";
	std::cout << "Cat default constrcutor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal()
{
	std::cout << "Cat copy constrcutor called" << std::endl;
	*this = copy;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_type = other._type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void)const
{
	std::cout << this->getType() << " says Meeeow" << std::endl;
}
