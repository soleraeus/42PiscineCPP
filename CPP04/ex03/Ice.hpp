/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:09:58 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/11 13:27:59 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class	Ice : public AMateria
{
	public :
		Ice(void);
		Ice(Ice const & src);
		virtual ~Ice(void);

		virtual Ice&	operator=(Ice const & rhs);

		virtual	AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};

#endif
