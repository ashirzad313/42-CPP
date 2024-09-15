/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateraSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:03:33 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/29 16:06:22 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource	(void)
{
	std::cout << "IMateriaSource constructor called" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource &copy)
{
	std::cout << "IMateriaSource copy constructor called" << std::endl;
	*this = copy;
}

IMateriaSource &IMateriaSource::operator=(const IMateriaSource &other)
{
	std::cout << "IMateriaSource assignment operator called" << std::endl;
	(void)other;
	return (*this);
}
