/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:06:35 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/29 16:44:19 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource(), _learnInventory()
{
	std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copy) : IMateriaSource(copy) , _learnInventory()
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = copy;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	std::cout << "MateriaSource assignment operator called" << std::endl;
	(void)other;
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destroyed" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnInventory[i])
			delete this->_learnInventory[i];
	}
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (materia && this->_learnInventory[i] == NULL)
		{
			if (this->inLearnInventory(materia))
				this->_learnInventory[i] = materia;
			else
				this->_learnInventory[i] = materia;
			std::cout << "Materia " << this->_learnInventory[i]->getType() << " learned at index " << i << std::endl;
			return ;
		}
	}
	if (materia)
		std::cout << "Cannot learn materia, inventory for MateriaSource is full!" << std::endl;
	else
		std::cout << "Cannot learn invalid materia" << std::endl;
	if (!this->inLearnInventory(materia))
		delete materia;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnInventory[i] && this->_learnInventory[i]->getType() == type)
			return (this->_learnInventory[i]->clone());
	}
	std::cout << type << " is invalid! can not create Materia" << std::endl;
	return (0);
}

int	MateriaSource::inLearnInventory(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnInventory[i] == materia)
			return (i);
	}
	return (0);
}
