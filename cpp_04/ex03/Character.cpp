/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:01:42 by ashirzad          #+#    #+#             */
/*   Updated: 2024/09/15 18:31:21 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : ICharacter()
{
	std::cout << "Character constrcutor called" << std::endl;
}

Character::Character(std::string name) : ICharacter()
{
	std::cout << "Character" << name  << " created" << std::endl;
	this->_name = name;
}

Character::Character(Character const &copy)
{
	std::cout << "Character copy constrctor called" << std::endl;
	*this = copy;
}

Character::~Character(void)
{
	std::cout << "Character destroyed" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

Character &Character::operator=(const Character &other)
{
	std::cout << "Character assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	for(int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
	}
	return (*this);
}

std::string const &Character::getName(void)const
{
	const std::string &stringRef = this->_name;
	return (stringRef);
}

void	Character::setName(std::string name)
{
	this->_name = name;
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			if (this->inInventory(m))
				this->inventory[i] = m->clone();
			else
				this->inventory[i] = m;
			std::cout << "Charcater equiped with AMateria " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << "inventory is full, can not equip" << std::endl;
	delete m;
}

void	Character::unequip(int i)
{
	if (i < 0 || i > 3)
	{
		std::cout << "Invalid index, can't unequip" << std::endl;
		return ;
	}
	if (this->inventory[i])
	{
		std::cout << "inventory type " << this->inventory[i]->getType() << "unequiped\n";
		this->inventory[i] = NULL;
		return ;
	}
	std::cout << "can not unequip inventory index of " << i << " is empty" << std::endl;
}

void	Character::use(int i, ICharacter &target)
{
	if (i < 0 || i > 3)
	{
		std::cout << "Invalid index, can't use" << std::endl;
		return ;
	}
	if (this->inventory[i])
	{
		this->inventory[i]->use(target);
		return ;
	}
	std::cout << "can not use inventory index of " << i << std::endl;
}

int	Character::inInventory(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == m)
			return (i);
	}
	return (0);
}


