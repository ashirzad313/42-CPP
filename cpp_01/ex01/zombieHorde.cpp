/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:16:47 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/18 15:33:29 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N];
	if (horde == NULL)
	{
		std::cout << "zombie horde creation failed" << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		horde[i].setname(name);
	return (horde);
}
