/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:23:19 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/24 17:40:39 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public	:
		//orthodox canonical form
		FragTrap	(void);
		FragTrap	(const FragTrap &copy);
		FragTrap	(std::string Name);
		virtual 	~FragTrap(void);
		FragTrap	&operator=(const FragTrap &other);

		//methods
		void	highFivesGuys(void);
};

#endif
