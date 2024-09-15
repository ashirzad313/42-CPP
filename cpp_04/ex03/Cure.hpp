/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:33:16 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/29 15:45:14 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CURE_HPP__
#define __CURE_HPP__

#include "ICharacter.hpp"

class Cure : public AMateria
{
	public	:
		/* Constrcutor & Destructors */
		Cure(void);
		Cure(Cure const &copy);
		~Cure(void);

		Cure &operator=(const Cure &other);
		virtual AMateria *clone(void) const;
		void	use(ICharacter &target);
};

#endif
