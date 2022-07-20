/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:42:15 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/20 17:46:41 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Default FragTrap constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string const & name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap constructor with name " << this->_name << " called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & src): ClapTrap(src._name)
{
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	std::cout << "FragTrap copy constructor called" << std::endl;
	return ;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	std::cout << "FragTrap assignation constructor called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called on FragTrap " << (this->_name[0] ? this->_name : "unnamed") << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << (this->_name[0] ? this->_name : "unnamed") << " wants to high five!" << std::endl;
	return ;
}
