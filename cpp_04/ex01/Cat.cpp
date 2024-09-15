/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:27:50 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/28 15:51:53 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->_type = "Cat";
	std::cout << "Cat default constrcutor called" << std::endl;
	this->_brain = new (Brain);
	if (!this->_brain)
	{
		std::cout << "Cat brain is dead" << std::endl;
		exit(1);
	}
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
	this->_brain = new (Brain);
	if (!this->_brain)
	{
		std::cout << "Cat brain is dead" << std::endl;
		exit(1);
	}
	*this->_brain = *other._brain;
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

void	Cat::getIdeas(void)const
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Cat idea is " << this->_brain->getIdea(i) << std::endl;
	}
}

void	Cat::setIdea(unsigned int i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}
