/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:14:02 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/23 17:16:16 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fract_bits = 8;

// Orthodox Canonical Form

Fixed::Fixed(void) : _fixed_point(0)
{
	std::cout << "Default constructor created" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int value constructor created" << std::endl;
	this->_fixed_point = value << Fixed::_fract_bits;
}

Fixed::Fixed(const float value)
{
	std::cout << "float value constructor created" << std::endl;
	this->_fixed_point = roundf(value * (1 << Fixed::_fract_bits));
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

float	Fixed::toFloat(void)const
{
	return ((this->_fixed_point / (float)(1 << Fixed::_fract_bits)));
}

int		Fixed::toInt(void)const
{
	return (this->_fixed_point >> Fixed::_fract_bits);
}

std::ostream &operator<<(std::ostream &other, Fixed const &fixed)
{
	other << fixed.toFloat();
	return (other);
}


