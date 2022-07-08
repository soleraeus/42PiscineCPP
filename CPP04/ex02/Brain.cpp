/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:45:09 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/08 18:25:27 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void): _nbIdeas(0)
{
	std::cout << "Brain default constructor called" << std::endl;
	return ;
}


Brain::Brain(Brain const & src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	this->_nbIdeas = src.getNbIdeas();
	return ;
}

Brain &	Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain assignation constructor called" << std::endl;
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	this->_nbIdeas = rhs.getNbIdeas();
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

bool	Brain::addIdea(std::string const & idea)
{
	if (this->getNbIdeas() >= 100)
	{
		std::cerr << "That brain is already full! Remove some ideas before" << std::endl;
		return (1);
	}
	this->ideas[this->getNbIdeas()] = idea;
	this->_nbIdeas += 1;
	return (0);
}

std::string *Brain::getIdeas(void) const
{
	std::string	*ret_ideas = new std::string[100];

	for (int i = 0; i < 100; i++)
		ret_ideas[i] = this->ideas[i];
	return (ret_ideas);
}

std::string *Brain::removeIdea(void)
{
	std::string	*ret_ideas = new std::string(this->ideas[0]);
	if (this->_nbIdeas != 0)
		this->_nbIdeas -= 1;
	for (int i = 0; i < this->_nbIdeas; i++)
		this->ideas[i] = this->ideas[i + 1];
	return (ret_ideas);
}

int	Brain::getNbIdeas(void) const
{
	return (this->_nbIdeas);
}
