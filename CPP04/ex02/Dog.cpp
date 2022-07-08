/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:23:40 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/08 18:32:18 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	return ;
}

Dog::Dog(Dog const & src): Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = src.type;
	this->brain = new Brain(*(src.brain));
	return ;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog assignation constructor called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*(rhs.brain));
	return (*this);
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "* Bark *" << std::endl;
	return ;
}

bool	Dog::addIdea(std::string const & idea)
{
	return (this->brain->addIdea(idea));
}

std::string *Dog::getIdeas(void) const
{
	return (this->brain->getIdeas());
}

std::string *Dog::removeIdea(void)
{
	return (this->brain->removeIdea());
}

int	Dog::getNbIdeas(void) const
{
	return (this->brain->getNbIdeas());
}
