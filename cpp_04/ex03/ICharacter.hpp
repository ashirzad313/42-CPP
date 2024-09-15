/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:17:23 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/29 16:33:38 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ICHARACTER_HPP__
#define __ICHARACTER_HPP__


#include "AMateria.hpp"

class ICharacter
{
	protected	:
		ICharacter	(void);
		ICharacter	(const ICharacter &copy);
		ICharacter &operator=(const ICharacter &other);
	public		:
		virtual ~ICharacter(void) {};
		virtual std::string const &getName() const = 0;
		virtual void equip(AMateria *m) = 0;
		virtual void unequip(int i) = 0;
		virtual void use(int i, ICharacter &target) = 0;
};

#endif // __ICHARACTER_HPP__
