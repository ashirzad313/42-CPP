/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:40:05 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/29 16:41:03 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __IMATERIASOURCE_HPP__
#define __IMATERIASOURCE_HPP__

#include "AMateria.hpp"

class IMateriaSource
{
	protected	:
		IMateriaSource(void);
		IMateriaSource(IMateriaSource const &copy);

		IMateriaSource &operator=(const IMateriaSource &other);
	public		:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria *materia) = 0;
		virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif // __IMATERIASOURCE_HPP__
