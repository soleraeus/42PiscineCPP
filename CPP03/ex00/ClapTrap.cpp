/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:42:15 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/20 17:24:44 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const & name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor with name " << this->_name << " called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src): _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	std::cout << "Assignation constructor called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called on ClapTrap " << (this->_name[0] ? this->_name : "unnamed") << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string & target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << (this->_name[0] ? this->_name : "unnamed") << " wants to attack but it is dead" << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << (this->_name[0] ? this->_name : "unnamed") << " wants to attack but it has no energy left" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << (this->_name[0] ? this->_name : "unnamed") << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints -= 1;
	return ;
}

void	ClapTrap::attack(ClapTrap & target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << (this->_name[0] ? this->_name : "unnamed") << " wants to attack but it is dead" << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << (this->_name[0] ? this->_name : "unnamed") << " wants to attack but it has no energy left" << std::endl;
		return ;
	}
	this->attack((target._name[0] ? target._name : std::string("unnamed")));
	target.takeDamage(this->_attackDamage);
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << (this->_name[0] ? this->_name : "unnamed") << " has been attacked for " << amount << " points of damage but it has no hit points left" << std::endl;
		return ;
	}
	this->_hitPoints = amount >= this->_hitPoints ? 0 : this->_hitPoints - amount;
	std::cout << "ClapTrap " << (this->_name[0] ? this->_name : "unnamed") << " just took " << amount << " points of damage!" << std::endl;
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << (this->_name[0] ? this->_name : "unnamed") << " is dead" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << (this->_name[0] ? this->_name : "unnamed") << " wants to repair itself but it is dead" << std::endl;
		return ;
	}

	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << (this->_name[0] ? this->_name : "unnamed") << " wants to repair itself but it has no energy left" << std::endl;
		return ;
	}
	this->_hitPoints += amount;
	this->_energyPoints -= 1;
	std::cout << "ClapTrap " << (this->_name[0] ? this->_name : "unnamed") << " repaired itself for " << amount << " points. It now has " << this->_hitPoints << " hit points." << std::endl;
	return ;
}
