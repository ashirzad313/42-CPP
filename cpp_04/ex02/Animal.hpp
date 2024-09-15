/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:05:28 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/28 17:55:53 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>
#include <string>

class	Animal
{
	protected	:
		std::string	_type;
		Animal	(void);
	public		:
		// Orthodox Canonicol Form
		Animal	(const Animal &copy);
		Animal &operator=(const Animal &other);
		virtual ~Animal (void);

		//methods
		virtual	void makeSound(void) const = 0;
		std::string	getType(void) const;
};

#endif // __ANIMAL_HPP__
