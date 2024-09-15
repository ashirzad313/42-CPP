/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:33:15 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/28 13:55:50 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog default constrcutor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog copy constrcutor called" << std::endl;
	*this = copy;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_type = other._type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void)const
{
	std::cout << this->getType() << " says Woof" << std::endl;
}
