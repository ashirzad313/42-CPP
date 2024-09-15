/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:16:10 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/29 16:25:37 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include <iostream>
#include <string>

class ICharacter;

class AMateria
{
	protected	:
		std::string	_type;
		AMateria(std::string const &type);
		AMateria(AMateria const &copy);
	public		:
		virtual ~AMateria(void);
		AMateria &operator=(const AMateria &other);
		std::string const &getType(void)const;
		virtual AMateria *clone(void)const = 0;
		virtual void use(ICharacter &target) = 0;
};

#endif // __AMATERIA_HPP__
