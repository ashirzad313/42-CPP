/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:44:21 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/29 16:40:40 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private	:
		AMateria	*_learnInventory[4];
	public	:
		/* Constructors & Destrcutors */
		MateriaSource(void);
		MateriaSource(MateriaSource const &other);
		~MateriaSource(void);

		MateriaSource &operator=(MateriaSource const &copy);
		virtual void learnMateria(AMateria *materia);
		virtual AMateria	*createMateria(std::string const &type);
		int	inLearnInventory(AMateria *materia);
};

#endif /* __MATERIASOURCE_HPP__ */

