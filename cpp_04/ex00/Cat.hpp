/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:27:50 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/28 13:51:59 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"

class Cat : public Animal
{
	public		:
		// Orthodox Canonicol Form
		Cat	(void);
		Cat	(const Cat &copy);
		Cat &operator=(const Cat &other);
		virtual ~Cat (void);

		//methdos
		void	makeSound(void)const;
};

#endif // __CAT_HPP__
