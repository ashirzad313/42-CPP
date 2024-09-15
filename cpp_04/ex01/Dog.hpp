/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:33:40 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/28 15:49:37 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
#define __DOG_HPP__

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private		:
		Brain	*_brain;
	public		:
		// Orthodox Canonicol Form
		Dog	(void);
		Dog	(const Dog &copy);
		Dog &operator=(const Dog &other);
		virtual ~Dog (void);

		//methods
		void	makeSound(void)const;
		void	getIdeas(void)const;
		void	setIdea(unsigned int i, std::string idea);
};

#endif // __DOG_HPP__
