/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 17:24:08 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/24 15:27:06 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Orthodox Canonical Form

ClapTrap::ClapTrap(void) : _Name("(null)"), _hit_points(10) , _energy_points(10) , _attack_damage(0)
{
	std::cout << "Default Constructor created" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _hit_points(10) , _energy_points(10) , _attack_damage(0)
{
	std::cout << "Constructor " << Name << " created" << std::endl;
	this->_Name = Name;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_Name = other._Name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor destroyed" << std::endl;
}

//methods

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		std::cout << "ClapTrap " << this->_Name;
		std::cout << " attacks " << target << ", causing ";
		std::cout << this->_attack_damage << " points of damage!";
		std::cout << std::endl;
		this->_energy_points -= 1;
	}
	else
	{
		std::cout << "ClapTrap " << this->_Name << " is not able to attack ";
		std::cout << target << ", because he has not enough hit points.";
		std::cout << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points >= amount)
		this->_hit_points -= amount;
	else if (this->_hit_points > 0 && this->_hit_points < amount)
		this->_hit_points = 0;
	else
	{
		std::cout << "ClapTrap " << this->_Name << " is already dead." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_Name;
	std::cout << " was attacked and lost " << amount;
	std::cout << " hit points, he now has " << this->_hit_points << " hit points.";
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points > 0 && this->_hit_points > 0 && this->_hit_points + amount <= 10)
	{
		this->_hit_points += amount;
		std::cout << "ClapTrap " << this->_Name << " repaired itself and gained ";
		std::cout << amount << " of hit points, he now has ";
		std::cout << this->_hit_points << " hit points.";
		std::cout << std::endl;
		this->_energy_points--;
	}
	else if (this->_energy_points == 0)
	{
		std::cout << "ClapTrap " << this->_Name;
		std::cout << " is not able to repair itself, because he doesn't have enough energy points.";
		std::cout << std::endl;

	}
	else if (this->_hit_points == 0)
	{
		std::cout << "ClapTrap " << this->_Name;
		std::cout << " is not able to repair itself, because he doesn't have enough hit points.";
		std::cout << std::endl;

	}
	else
	{
		std::cout << "ClapTrap " << this->_Name;
		std::cout << " can't be repaired to have more than 10 hit points.";
		std::cout << std::endl;
	}
}
