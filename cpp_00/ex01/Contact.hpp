/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:52:47 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/16 11:27:07 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef __CONTACT_HPP__
#define __CONTACT_HPP__

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class	Contact
{
	private :
		int			_active;
		int			_index;
		string		_name;
		string		_lastname;
		string		_nickname;
		string		_phonenumber;
		string		_darkestsecret;
	public	:
		//set value
		void		set_index(int index);
		void		set_active(int index);
		int			set_name(string name);
		int			set_lastname(string lastname);
		int			set_nickname(string nickname);
		int			set_phonenumber(string phonenumber);
		int			set_darkestsecret(string darkestsecret);
		// get value
		Contact		get_contact(void);
		int			get_index(void);
		int			get_active(void);
		string		get_name(void);
		string		get_lastname(void);
		string		get_nickname(void);
		string		get_phonenumber(void);
		string		get_darkestsecret(void);

		// print contact
		void		print_contact(void);
		void		display_info(void);
};

#endif /* __CONTACT_HPP__ */
