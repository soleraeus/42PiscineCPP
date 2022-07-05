/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:42:15 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/05 19:39:18 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap()
{
	this->_energyPoints = 50;
	std::cerr << "DiamondTrap specs: "<< this->_hitPoints << ", "<< this->_energyPoints << ", " << this->_attackDamage << std::endl;
	std::cerr << "FragTrap specs: "<< FragTrap::_hitPoints << ", "<< FragTrap::_energyPoints << ", " << FragTrap::_attackDamage << std::endl;
	std::cerr << "ScavTrap specs: "<< ScavTrap::_hitPoints << ", "<< ScavTrap::_energyPoints << ", " << ScavTrap::_attackDamage << std::endl;
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string const & name): ClapTrap((name + "_clap_name")), ScavTrap(name), FragTrap(name)
{
	this->_energyPoints = 50;
	this->_name = name;
	std::cerr << this->ClapTrap::_name << std::endl;
	std::cout << "DiamondTrap constructor with name " << this->_name << " called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src): ClapTrap(src._name), ScavTrap(src._name), FragTrap(src._name)
{
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
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

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is: " << this->_name << " and my ClapTrap parent is: " << this->ClapTrap::_name << std::endl;
	return ;
}
