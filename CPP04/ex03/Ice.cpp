/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:15:18 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/11 13:38:02 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria(std::string("ice"))
{
	return ;
}

Ice::Ice(Ice const & src): AMateria(std::string("ice"))
{
	(void)src;
	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice&	Ice::operator=(Ice const & rhs)
{
	std::cerr << "Cannot instantiate Ice with assignation operator" << std::endl;
	(void)rhs;
	return (*this);
}

AMateria*	Ice::clone() const
{
	AMateria*	ret = new Ice();
	return (ret);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
