/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:23:40 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/08 17:27:42 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
	return ;
}

WrongCat::WrongCat(WrongCat const & src): WrongAnimal()
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->type = src.type;
	return ;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "WrongCat assignation constructor called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "* Wrong meow (aren't they always anyway?) *" << std::endl;
	return ;
}
