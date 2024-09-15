/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:33:39 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/24 17:51:20 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public ScavTrap , public FragTrap
{
	private	:
		std::string _Name;
	public	:
		// Orthodox Canonical Form
		DiamondTrap	(void);
		DiamondTrap	(const DiamondTrap &copy);
		DiamondTrap	(std::string Name);
		virtual 	~DiamondTrap(void);
		DiamondTrap	&operator=(const DiamondTrap &other);

		// methods
		void	attack(const std::string &target);
		void	whoAmI(void);
};

#endif

