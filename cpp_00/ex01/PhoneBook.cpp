/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:11:38 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/17 15:10:44 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

using namespace std;

void	PhoneBook::add(int i)
{
	this->_contacts[i].set_index(i + 1);
	this->_contacts[i].set_active(1);
	while (this->_contacts[i].set_name(get_input("First Name : ")) != 0);
	while (this->_contacts[i].set_lastname(get_input("Last Name : ")) != 0);
	while (this->_contacts[i].set_nickname(get_input("Nick Name : ")) != 0);
	while (this->_contacts[i].set_phonenumber(get_input("Phone Number : ")) != 0);
	while (this->_contacts[i].set_darkestsecret(get_input("Darkest Secret : ")) != 0);
	cout << "contact has been successfully added.\n";
	cout << endl;
}

void	PhoneBook::search(void)
{
	int	i = 0;
	if (this->_contacts[i].get_active() != 1)
	{
		cout << "there is no contact\n";
		return ;
	}
	cout << "|-------------------------------------------|\n";
	cout << "|     Index|First Name| Last Name|  Nickname|\n";
	cout << "|-------------------------------------------|\n";
	while (this->_contacts[i].get_active() == 1)
		this->_contacts[i++].print_contact();
	cout << endl;
	int index = this->get_index();
	if (index == 0)
		return ;
	this->_contacts[index - 1].display_info();
}


string	PhoneBook::skip(string &input)
{
	int start = input.find_first_not_of(' ');
	if (start < 0)
		input = "";
	else
		input = input.substr(start);
	return (input);
}

string	PhoneBook::get_input(string msg)
{
	string	input;

	cout << msg;
	if (!getline(cin, input))
		exit(0);
	input = skip(input);
	return (input);
}

int	PhoneBook::get_index(void)
{
	int	long long index = 0;
	while (1)
	{
		string input = get_input("Enter index of the contact you want to see or 0 to quit:\n");
		if (input != "")
		{
			index = get_number(input);
			if (index == 0)
				return (0);
			else if (index == -1)
				cout << "invalid value, please try a number from 0 - " << MAX << endl;
			else if (index <= MAX && this->_contacts[index - 1].get_active() == 1)
				return (index);
			else
				cout << "there is no contact with index " << index << endl;
		}
	}
	return (0);
}

int	PhoneBook::get_number(string str)
{
	for (int i = 0; i < (int)str.length(); i++)
	{
		if ((str[i] >= '0' && str[i] <= '9'))
			continue;
		else
			return (-1);
	}
	return (atol(str.c_str()));
}
