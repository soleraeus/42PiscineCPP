/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:25:55 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/25 11:51:18 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void): _nbMaterias(0)
{
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	int	idx = src.getNbMaterias();

	for (int i = 0; i < idx; i++)
	{
		this->_materias[i] = src._materias[i]->clone();
	}
	this->_nbMaterias = idx;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0 ; i < this->_nbMaterias; i++)
	{
		delete this->_materias[i];
	}
	return ;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const & rhs)
{
	int	idx = rhs.getNbMaterias();

	for (int i = 0 ; i < this->_nbMaterias; i++)
	{
		delete this->_materias[i];
	}
	for (int i = 0; i < idx; i++)
	{
		this->_materias[i] = rhs._materias[i]->clone();
	}
	this->_nbMaterias = idx;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	if (this->_nbMaterias >= 4)
	{
		std::cerr << "MateriaSource already contains 4 materias!" << std::endl;
		return ;
	}
	this->_materias[this->_nbMaterias] = materia;
	this->_nbMaterias += 1;
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int	i = 0;
	while (i < this->_nbMaterias)
	{
		if (this->_materias[i]->getType() == type)
			return (this->_materias[i]->clone());
		i++;
	}
	return (NULL);
}

int	MateriaSource::getNbMaterias(void) const
{
	return (this->_nbMaterias);
}
