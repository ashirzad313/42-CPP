/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:37:59 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/19 17:48:38 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <iostream>

class Weapon
{
	private	:
		std::string	_type;
	public	:
		Weapon	(std::string type);
		const std::string&	getType();
		void	setType(std::string new_str);
};

#endif // __WEAPON_HPP__
