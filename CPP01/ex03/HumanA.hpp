/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 13:41:39 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/06 15:44:11 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"

class	HumanA
{
	public :

		HumanA(std::string const name, Weapon const & weapon);
		~HumanA(void);

		void	attack(void) const;
	
	private :

		std::string		_name;
		Weapon const &	_weapon;
};

#endif
