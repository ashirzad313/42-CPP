/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:05:28 by ashirzad          #+#    #+#             */
/*   Updated: 2024/09/15 18:26:19 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
#define __WRONGANIMAL_HPP__

#include <iostream>
#include <string>

class	WrongAnimal
{
	protected	:
		std::string	_type;
	public		:
		// Orthodox Canonicol Form
		WrongAnimal	(void);
		WrongAnimal	(const WrongAnimal &copy);
		WrongAnimal &operator=(const WrongAnimal &other);
		virtual ~WrongAnimal (void);

		//methods
		void makeSound(void) const;
		std::string	getType(void) const;
};

#endif // __WRONGANIMAL_HPP__
