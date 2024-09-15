/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:13:02 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/18 15:30:34 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>
#include <string>
#include <algorithm>

class Zombie
{
	private	:
		std::string	_name;
	public	:
		Zombie	(std::string name);
		Zombie	(void);
		~Zombie	(void);
		void	announce(void);
		void	setname(std::string name);
};

#endif
