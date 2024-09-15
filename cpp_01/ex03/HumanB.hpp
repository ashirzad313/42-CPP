/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:59:24 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/19 17:51:54 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

#include "Weapon.hpp"

class HumanB
{
	private	:
		std::string	_name;
		Weapon		*_weapon;
	public	:
		HumanB	(std::string name);
		~HumanB	(void);
		void	setWeapon(Weapon &weapon);
		void	attack(void);
};

#endif // __HUMANB_HPP__
