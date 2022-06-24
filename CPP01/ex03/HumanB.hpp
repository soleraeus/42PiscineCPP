/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 13:41:39 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/24 14:50:33 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class	HumanB
{
	public :

		HumanB(std::string const name);
		~HumanB(void);

		void	attack(void) const;
		void	setWeapon(Weapon & weapon);
	
	private :

		std::string	_name;
		Weapon		*_weapon;
};

#endif
