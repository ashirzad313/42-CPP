/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:31:43 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/24 15:47:57 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private	:
		bool	_guarding_gate;
	public	:
		//orthodox canonical form
		ScavTrap	(void);
		ScavTrap	(const ScavTrap &copy);
		ScavTrap	(std::string Name);
		virtual 	~ScavTrap(void);
		ScavTrap	&operator=(const ScavTrap &other);

		//methods
		void	attack(const std::string &target);
		void	guardGate(void);
};

#endif
