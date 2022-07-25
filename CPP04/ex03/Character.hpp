/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:44:04 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/25 12:02:11 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class	Character: public ICharacter
{
	public :
		Character(void);
		Character(std::string const & name);
		Character(Character const & src);
		virtual ~Character();

		virtual Character&	operator=(Character const & rhs);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private :
		std::string	_name;
		AMateria*	_materias[4];
};

#endif
