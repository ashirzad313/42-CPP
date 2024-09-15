/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:37:21 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/24 15:47:06 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_guarding_gate = false;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap()
{
	this->_guarding_gate = copy._guarding_gate;
	std::cout << "ScavTrap copy constrcutor called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_guarding_gate = false;
	std::cout << "ScavTrap Constructor for the name " << this->_Name << " called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Deconstructor for " << this->_Name << " called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	this->_attack_damage = other._attack_damage;
	this->_energy_points = other._energy_points;
	this->_Name = other._Name;
	this->_hit_points = other._hit_points;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		std::cout << "ScavTrap " << this->_Name;
		std::cout << " attacks " << target << ", causing ";
		std::cout << this->_attack_damage << " points of damage!";
		std::cout << std::endl;
		this->_energy_points -= 1;
	}
	else
	{
		std::cout << "ScavTrap " << this->_Name << " is not able to attack ";
		std::cout << target << ", because he has not enough hit points.";
		std::cout << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	if (!this->_guarding_gate)
	{
		this->_guarding_gate = true;
		std::cout << "ScavTrap " << this->_Name;
		std::cout << " is now guarding the gate.";
		std::cout << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->_Name;
		std::cout << " is already guarding the gate.";
		std::cout << std::endl;
	}
}
