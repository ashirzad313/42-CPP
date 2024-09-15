/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:27:50 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/28 14:19:25 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public		:
		// Orthodox Canonicol Form
		WrongCat	(void);
		WrongCat	(const WrongCat &copy);
		WrongCat &operator=(const WrongCat &other);
		virtual ~WrongCat (void);

		//methdos
		void	makeSound(void)const;
};

#endif // __WrongCAT_HPP__
