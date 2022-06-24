/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 13:38:22 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/24 13:44:00 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const type): _type(type)
{
	return ;
}

Weapon::~Weapon(void)
{
	return;
}

std::string const &	Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(std::string const type)
{
	this->_type = type;
	return ;
}
