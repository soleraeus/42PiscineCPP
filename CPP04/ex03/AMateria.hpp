/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:42:15 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/25 11:36:15 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"
# include <string>
# include <iostream>
class	ICharacter;

class	AMateria
{
	public :
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		virtual ~AMateria(void);

		virtual AMateria&	operator=(AMateria const & rhs);

		std::string const &	getType() const;

		virtual	AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

	protected :
		std::string const	_type;
};

#endif
