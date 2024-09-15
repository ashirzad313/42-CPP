/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:29:11 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/28 15:52:36 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constrcutor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constrcutor called" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

//methods
const	std::string Brain::getIdea(unsigned int i)const
{
	if (i > 100)
		std::cout << "There is only 100 ideas per Brain" << std::endl;
	else
		return (this->_ideas[i]);
	return (NULL);
}

const	std::string *Brain::getIdeaAddress(unsigned int i)const
{
	if (i > 100)
		std::cout << "There is only 100 ideas per Brain" << std::endl;
	else
	{
		const std::string &stringRef = this->_ideas[i];
		return (&stringRef);
	}
	return (NULL);
}

void	Brain::setIdea(unsigned int i, std::string idea)
{
	if (i > 100)
		std::cout << "There is only 100 ideas per Brain" << std::endl;
	else
		this->_ideas[i] = idea;
}
