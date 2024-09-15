/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:37:21 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/24 17:30:58 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	this->_guarding_gate = false;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap()
{
	this->_guarding_gate = copy._guarding_gate;
	std::cout << "FragTrap copy constrcutor called" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_guarding_gate = false;
	std::cout << "FragTrap Constructor for the name " << this->_Name << " called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Deconstructor for " << this->_Name << " called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_Name << ": You want a high five?\n\t*WHAMM*\nHere you go." << std::endl;
}


