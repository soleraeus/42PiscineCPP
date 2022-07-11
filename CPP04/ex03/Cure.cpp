/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:15:18 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/11 13:37:40 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria(std::string("cure"))
{
	return ;
}

Cure::Cure(Cure const & src): AMateria(std::string("cure"))
{
	(void)src;
	return ;
}

Cure::~Cure(void)
{
	return ;
}

Cure&	Cure::operator=(Cure const & rhs)
{
	std::cerr << "Cannot instantiate Cure with assignation operator" << std::endl;
	(void)rhs;
	return (*this);
}

AMateria*	Cure::clone() const
{
	AMateria*	ret = new Cure();
	return (ret);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
