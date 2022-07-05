/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:59:09 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/05 13:34:07 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap: public ScavTrap, public FragTrap
{
	public :
		DiamondTrap(void);
		DiamondTrap(std::string const & name);
		DiamondTrap(DiamondTrap const & src);
		DiamondTrap & operator=(DiamondTrap const & rhs);
		~DiamondTrap(void);

		using FragTrap::_hitPoints;
		using ScavTrap::_energyPoints;
		using FragTrap::_attackDamage;
		using ScavTrap::attack;
//	private :
//		std::string	_name;
};

#endif
