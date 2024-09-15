/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:33:36 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/24 17:51:11 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("(null)")
{
	this->_Name = "(null)";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy) , FragTrap(copy)
{
	*this = copy;
	std::cout << "DiamondTrap copy constrcutor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_trap")
{
	this->_Name = Name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "DiamondTrap Constructor for the name " << this->_Name << " called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Deconstructor for " << this->_Name << " called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	this->_attack_damage = other._attack_damage;
	this->_energy_points = other._energy_points;
	this->_Name = other._Name + "_clap_trap";
	this->_hit_points = other._hit_points;
	return (*this);
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Hello i am a DiamondTrap named " << this->_Name <<
	" and i am originated from the ClapTrap named " << ClapTrap::_Name << "." <<
	std::endl;
}
