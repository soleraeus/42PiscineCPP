/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:42:15 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/21 13:03:59 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(std::string("unnamed_clap_name")), FragTrap(), ScavTrap()
{
	this->_hitPoints = 100;
	this->_attackDamage = 30;
	this->_name = "unnamed";
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string const & name): ClapTrap((name + "_clap_name")), FragTrap(name), ScavTrap(name)
{
	this->_hitPoints = 100;
	this->_attackDamage = 30;
	this->_name = name;
	std::cout << "DiamondTrap constructor with name " << this->_name << " called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src): ClapTrap(src.ClapTrap::_name), FragTrap(src._name), ScavTrap(src._name)
{
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	this->_name = src._name;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	return ;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & rhs)
{
	this->ClapTrap::_name = rhs.ClapTrap::_name;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	std::cout << "DiamondTrap assignation constructor called" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor called on DiamondTrap " << (this->_name[0] ? this->_name : "unnamed") << std::endl;
	return ;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is: \"" << this->_name << "\" and my ClapTrap parent is: \"" << this->ClapTrap::_name << "\"" << std::endl;
	return ;
}
