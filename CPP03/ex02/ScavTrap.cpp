/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:42:15 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/05 12:37:49 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Default ScavTrap constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string const & name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap constructor with name " << this->_name << " called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src): ClapTrap(src._name)
{
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	std::cout << "ScavTrap copy constructor called" << std::endl;
	return ;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	std::cout << "ScavTrap assignation constructor called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called on ScavTrap " << (this->_name[0] ? this->_name : "unnamed") << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string & target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ScavTrap " << (this->_name[0] ? this->_name : "unnamed") << " wants to attack but it is dead" << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ScavTrap " << (this->_name[0] ? this->_name : "unnamed") << " wants to attack but it has no energy left" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << (this->_name[0] ? this->_name : "unnamed") << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints -= 1;
	return ;
}


void	ScavTrap::attack(ClapTrap & target)
{
	this->attack(target.getName());
	target.takeDamage(this->_attackDamage);
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " has entered Gate keeper mode" << std::endl;
	return ;
}
