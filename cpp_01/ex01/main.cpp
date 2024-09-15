/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:12:32 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/18 15:27:10 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie *horde = zombieHorde(5, "zam");

	for (int i = 0; i < 5; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
