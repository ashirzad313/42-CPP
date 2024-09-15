/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:14:02 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/22 15:44:06 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fract_bits = 8;

// Orthodox Canonical Form

Fixed::Fixed(void) : _fixed_point(0)
{
	std::cout << "Default constructor created" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor created" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->setRawBits(other._fixed_point);
	}
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

//methods

void	Fixed::setRawBits(int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_point = raw;
}

int	Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point);
}


