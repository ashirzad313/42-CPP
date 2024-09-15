/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:33:40 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/28 14:00:14 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
#define __DOG_HPP__

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
	public		:
		// Orthodox Canonicol Form
		Dog	(void);
		Dog	(const Dog &copy);
		Dog &operator=(const Dog &other);
		virtual ~Dog (void);

		//methods
		void	makeSound(void)const;
};

#endif // __DOG_HPP__
