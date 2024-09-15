/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:24:05 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/28 15:33:49 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <iostream>
#include <string>

class	Brain
{
	protected	:
		std::string	_ideas[100];
	public		:
		// Orthodox Canonicol Form
		Brain	(void);
		Brain	(const Brain &copy);
		Brain &operator=(const Brain &other);
		virtual ~Brain (void);

		//methods
		const	std::string getIdea(unsigned int i)const;
		const	std::string *getIdeaAddress(unsigned int i)const;
		void	setIdea(unsigned int i, std::string idea);
};

#endif // __BRAIN_HPP__
