/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:08:47 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/23 17:16:00 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <cmath>
#include <string>

class	Fixed
{
	private	:
		int	_fixed_point;
		static const int _fract_bits;
	public	:
		// Orthodox Canonical Form
		Fixed	(void);
		Fixed	(const int value);
		Fixed	(const float value);
		Fixed	(const Fixed &copy);
		~Fixed	(void);

		//operation overload
		Fixed	&operator=(const Fixed &other);
		bool	operator>(const Fixed &other) const;
		bool	operator<(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const ;
		bool	operator>=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;

		//arithmetic operators

		float	operator+(const Fixed &other) const;
		float	operator-(const Fixed &other) const;
		float	operator*(const Fixed &other) const;
		float	operator/(const Fixed &other) const;

		// Overloaded pre-increment Operators
		Fixed	operator++(void);
		Fixed	operator--(void);

		// Overloaded post-increment Operators
		Fixed	operator++(int);
		Fixed	operator--(int);

		// min & max
		static Fixed	&min(Fixed &first, Fixed &second);
		static Fixed	&max(Fixed &first, Fixed &second);
		static const Fixed	&min(Fixed const &first, Fixed const &second);
		static const Fixed	&max(Fixed const &first, Fixed const &second);

		//methods
		void	setRawBits(int raw)const;
		int		getRawBits(void)const;
		float	toFloat(void)const;
		int		toInt(void)const;
};

std::ostream	&operator<<(std::ostream &other, Fixed const &fixed);

#endif // __FIXED_HPP__
