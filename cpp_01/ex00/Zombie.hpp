/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:33:31 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/18 15:02:52 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ZOMBIE_CPP__
#define __ZOMBIE_CPP__

#include <iostream>
#include <string>

class Zombie
{
	private	:
		std::string	_name;
	public	:
		Zombie	(std::string name);
		~Zombie	(void);
		void	announce(void);
};

#endif
