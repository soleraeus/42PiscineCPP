/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:23:40 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/08 18:02:10 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
	return ;
}

Cat::Cat(Cat const & src): Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = src.type;
	this->brain = new Brain(*(src.brain));
	return ;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat assignation constructor called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*(rhs.brain));
	return (*this);
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "* Meows *" << std::endl;
	return ;
}
