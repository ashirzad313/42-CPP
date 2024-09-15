/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:27:50 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/28 15:51:35 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private		:
		Brain	*_brain;
	public		:
		// Orthodox Canonicol Form
		Cat	(void);
		Cat	(const Cat &copy);
		Cat &operator=(const Cat &other);
		virtual ~Cat (void);

		//methdos
		void	makeSound(void)const;
		void	getIdeas(void)const;
		void	setIdea(unsigned int i, std::string idea);
};

#endif // __CAT_HPP__
