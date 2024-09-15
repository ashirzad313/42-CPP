/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:03:19 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/17 15:01:54 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// using namespace std;

void	Contact::set_active(int active)
{
	this->_active = active;
}

void	Contact::set_index(int index)
{
	this->_index = index;
}

int	Contact::set_name(string name)
{
	if (name == "")
		return (-1);
	this->_name = name;
	return (0);
}

int	Contact::set_lastname(string lastname)
{
	if (lastname == "")
		return (-1);
	this->_lastname = lastname;
	return (0);
}

int	Contact::set_nickname(string nickname)
{
	if (nickname == "")
		return (-1);
	this->_nickname = nickname;
	return (0);
}

int	Contact::set_phonenumber(string phonenumber)
{
	if (phonenumber == "")
		return (-1);
	this->_phonenumber = phonenumber;
	return (0);
}

int	Contact::set_darkestsecret(string darkestsecret)
{
	if (darkestsecret == "")
		return (-1);
	this->_darkestsecret = darkestsecret;
	return (0);
}


// get value methods

Contact Contact::get_contact(void)
{
	return (*this);
}

int	Contact::get_index(void)
{
	return (this->_index);
}

int	Contact::get_active(void)
{
	return (this->_active);
}

string	Contact::get_name(void)
{
	return (this->_name);
}

string	Contact::get_lastname(void)
{
	return (this->_lastname);
}

string	Contact::get_nickname(void)
{
	return (this->_nickname);
}

string	Contact::get_phonenumber(void)
{
	return (this->_phonenumber);
}

string	Contact::get_darkestsecret(void)
{
	return (this->_darkestsecret);
}

// print contact

void	Contact::print_contact(void)
{
	cout << "|";
	cout << setw(10) << this->_index << "|";
	if (this->_name.length() > 10)
		cout << this->_name.substr(0, 9) << '.';
	else
		cout << setw(10) << this->_name;
	cout << "|";
	if (this->_lastname.length() > 10)
		cout << this->_lastname.substr(0, 9) << '.';
	else
		cout << setw(10) << this->_lastname;
	cout << "|";
	if (this->_nickname.length() > 10)
		cout << this->_nickname.substr(0, 9) << '.';
	else
		cout << setw(10) << this->_nickname;
	cout << "|\n";
}

void	Contact::display_info(void)
{
	cout << endl;
	cout << "Index : " << this->_index<< endl;
	cout << "First Name : " << this->_name << endl;
	cout << "Last Name : " << this->_lastname << endl;
	cout << "Nickname : " << this->_nickname << endl;
	cout << "Phone Number : " << this->_phonenumber<< endl;
	cout << "Darkest Secret : " << this->_darkestsecret<< endl;
	cout << endl;
}


