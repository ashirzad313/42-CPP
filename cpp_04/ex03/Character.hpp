/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:26:03 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/29 15:12:42 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private	:
		std::string	_name;
		AMateria	*inventory[4];
	public	:
		// Constrcutor & Destructors
		Character(void);
		Character(std::string name);
		Character(Character const &copy);
		~Character(void);

		Character &operator=(const Character &other);
		std::string const &getName(void)const;
		void	setName(std::string name);
		virtual void equip(AMateria *m);
		virtual void unequip(int i);
		virtual void use(int i, ICharacter &target);
		int	inInventory(AMateria *m);
};

#endif
