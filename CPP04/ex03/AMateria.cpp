/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:48:13 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/25 11:37:19 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cerr << "Calling AMateria default constructor makes no sense, check you haven't made a mistake" << std::endl;
	return ;
}

AMateria::AMateria(std::string const & type): _type(type)
{
	return ;
}

AMateria::AMateria(AMateria const & src): _type(src.getType())
{
	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria&	AMateria::operator=(AMateria const & rhs)
{
	std::cerr << "Cannot instantiate AMateria with assignation operator" << std::endl;
	(void)rhs;
	return (*this);
}

std::string const &	AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "AMateria: does nothing on " << target.getName() << std::endl;
	return ;
}
