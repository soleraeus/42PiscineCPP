/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:00:43 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/11 13:44:19 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name): _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_materias[i] = NULL;
	}
	return ;
}

Character::Character(Character const & src): _name(src.getName())
{
	for (int i = 0 ; i < 4 ; i++)
	{
		if (src._materias[i])
			this->_materias[i] = src._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
	return ;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
	return ;
}

Character&	Character::operator=(Character const & rhs)
{
	this->_name = rhs.getName();
	for (int i = 0 ; i < 4 ; i++)
	{
		if (rhs._materias[i])
			this->_materias[i] = rhs._materias[i]->clone();
	}
	return (*this);
}

std::string const &	Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0 ; i < 4; i++)
	{
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->_materias[idx] != NULL)
		this->_materias[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_materias[idx] != NULL)
	{
		this->_materias[idx]->use(target);
	}
}
