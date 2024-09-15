/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:12:34 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/28 14:21:20 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("(null)")
{
	std::cout << "WrongAnimal default constrcutor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy constrcutor called" << std::endl;
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_type = other._type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound(void)const
{
	std::cout << "This WrongAnimal doesn't make any sound." << std::endl;
}

std::string	WrongAnimal::getType(void)const
{
	return(this->_type);
}
