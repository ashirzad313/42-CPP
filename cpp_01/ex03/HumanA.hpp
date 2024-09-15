/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:51:03 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/19 18:04:19 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__


#include "Weapon.hpp"

class HumanA
{
	private	:
		std::string	_name;
		Weapon		&_weapon;
	public	:
		HumanA	(std::string name, Weapon &weapon);
		~HumanA	(void);
		void	attack(void);
};

#endif // __HUMANA_HPP
