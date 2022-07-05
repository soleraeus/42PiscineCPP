/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:42:15 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/05 13:32:29 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap()
{
//	this->_hitPoints = FragTrap::_hitPoints;
//	this->_energyPoints = ScavTrap::_energyPoints;
//	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string const & name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
//	this->_hitPoints = FragTrap::_hitPoints;
//	this->_energyPoints = ScavTrap::_energyPoints;
//	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap constructor with name " << this->_name << " called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src): ClapTrap(src._name), ScavTrap(src._name), FragTrap(src._name)
{
//	this->_hitPoints = src._hitPoints;
//	this->_energyPoints = src._energyPoints;
//	this->_attackDamage = src._attackDamage;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	return ;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & rhs)
{
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
