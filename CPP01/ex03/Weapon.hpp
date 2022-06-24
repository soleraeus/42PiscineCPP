/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 13:34:50 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/24 13:43:49 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class	Weapon
{

	public :

		Weapon(std::string const type);
		~Weapon(void);

		std::string const &	getType(void) const;
		void				setType(std::string const type);
	
	private :

		std::string	_type;

};

#endif
