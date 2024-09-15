/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:22:12 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/17 15:03:11 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #pragma once
#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__

#include <string>
#include <iostream>
#include <cstdlib>
#include "Contact.hpp"

#define MAX 3

using namespace std;

class PhoneBook
{
	private	:
		Contact	_contacts[MAX];
	public	:
		void	add(int i);
		void	search(void);
		string	get_input(string msg);
		string	skip(string &input);
		int		get_number(string str);
		int		get_index();
};


#endif /* __PHONEBOOK_H__ */

