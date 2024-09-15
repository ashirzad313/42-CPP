/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:37:19 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/17 15:00:43 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(int args, char **argv)
{
	PhoneBook	phonebook;

	if (args != 1 || argv == NULL)
	{
		cout << "error!\n";
		return (-1);
	}
	int i = 0;
	while (true)
	{
		string input = phonebook.get_input("Enter your command [ADD, SEARCH, EXIT]:\n");
		if (i >= MAX)
			i = 0;
		if (input == "ADD")
		{
			phonebook.add(i);
			i++;
		}
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			return (0);
	}
	return (0);
}
