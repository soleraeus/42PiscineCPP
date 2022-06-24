/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 13:45:58 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/24 14:52:20 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const name): _name(name), _weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void) const
{
	if (!this->_weapon)
	{

		std::cout << this->_name << " wants to attack but has no weapon, let's go bare hands" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with their weapon " << this->_weapon->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon & weapon)
{
	this->_weapon = &weapon;
	return ;
}
