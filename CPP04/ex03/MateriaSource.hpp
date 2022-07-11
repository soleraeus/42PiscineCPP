/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:19:18 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/11 13:41:25 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class	MateriaSource: public IMateriaSource
{
	public :
		MateriaSource(void);
		MateriaSource(MateriaSource const & src);
		virtual	~MateriaSource(void);
		
		virtual MateriaSource&	operator=(MateriaSource const & rhs);

		virtual void		learnMateria(AMateria*);
		virtual AMateria*	createMateria(std::string const & type);
		virtual int			getNbMaterias(void) const;
	
	private :
		AMateria*	_materias[4];
		int			_nbMaterias;
};

#endif
