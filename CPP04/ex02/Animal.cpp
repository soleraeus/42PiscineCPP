/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:23:40 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/08 19:05:07 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type(std::string("Animal"))
{
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

Animal::Animal(Animal const & src): type(src.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
	return ;
}

Animal &	Animal::operator=(Animal const & rhs)
{
	std::cout << "Animal assignation constructor called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

std::string const & Animal:: getType(void) const
{
	return (this->type);
}
