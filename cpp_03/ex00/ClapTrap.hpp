/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 17:18:12 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/23 17:49:36 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <iostream>
#include <string>

class	ClapTrap
{
	private	:
		std::string	_Name;
		unsigned int _hit_points;
		unsigned int _energy_points;
		unsigned int _attack_damage;
	public	:
		// Orthodox Canonical Form
		ClapTrap	(void);
		ClapTrap	(std::string Name);
		ClapTrap	(const ClapTrap &copy);
		ClapTrap	&operator=(const ClapTrap &other);
		~ClapTrap	(void);

		//methods
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif
