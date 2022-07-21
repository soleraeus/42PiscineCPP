/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:59:09 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/21 13:07:25 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap: public virtual FragTrap, public virtual ScavTrap
{
	public :
		DiamondTrap(void);
		DiamondTrap(std::string const & name);
		DiamondTrap(DiamondTrap const & src);
		DiamondTrap & operator=(DiamondTrap const & rhs);
		~DiamondTrap(void);

		void	whoAmI(void);

	private :
		std::string	_name;
};

#endif
