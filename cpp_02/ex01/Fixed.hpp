/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:08:47 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/23 17:16:21 by ashirzad         ###   ########.fr       */
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
		Fixed	&operator=(const Fixed &other);
		~Fixed	(void);

		//methods
		void	setRawBits(int raw);
		int		getRawBits(void)const;
		float	toFloat(void)const;
		int		toInt(void)const;
};

std::ostream	&operator<<(std::ostream &other, Fixed const &fixed);

#endif // __FIXED_HPP__
