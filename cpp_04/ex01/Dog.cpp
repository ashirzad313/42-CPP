/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:33:15 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/28 15:52:01 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constrcutor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new (Brain);
	if (!this->_brain)
	{
		std::cout << "Dog brain is dead" << std::endl;
		exit(1);
	}
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
	this->_brain = new (Brain);
	if (!this->_brain)
	{
		std::cout << "Cat brain is dead" << std::endl;
		exit(1);
	}
	*this->_brain = *other._brain;
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

void	Dog::getIdeas(void)const
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Dog idea is " << this->_brain->getIdea(i) << std::endl;
	}
}

void	Dog::setIdea(unsigned int i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}
