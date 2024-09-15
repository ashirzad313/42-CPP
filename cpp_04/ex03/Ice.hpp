/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:36:47 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/29 16:34:56 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ICE_HPP__
#define __ICE_HPP__

#include "ICharacter.hpp"

class Ice : public AMateria
{
	public	:
		/* Constrcutors & Destrcutors */
		Ice	(void);
		Ice(Ice const &copy);
		~Ice(void);

		Ice	&operator=(Ice const &copy);

		virtual AMateria *clone(void)const;
		void	use(ICharacter &target);
};

#endif // __ICE_HPP__
