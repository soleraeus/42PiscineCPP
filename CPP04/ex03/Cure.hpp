/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:09:58 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/11 13:28:28 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Cure : public AMateria
{
	public :
		Cure(void);
		Cure(Cure const & src);
		virtual ~Cure(void);

		virtual Cure&	operator=(Cure const & rhs);

		virtual	AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};

#endif
