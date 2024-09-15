/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:05:25 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/28 17:55:59 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("(null)")
{
	std::cout << "Animal default constrcutor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copy constrcutor called" << std::endl;
	*this = copy;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_type = other._type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound(void)const
{
}

std::string	Animal::getType(void)const
{
	return(this->_type);
}


