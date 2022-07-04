/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:59:09 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/04 14:08:35 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	public :
		ScavTrap(void);
		ScavTrap(std::string const & name);
		ScavTrap(ScavTrap const & src);
		ScavTrap & operator=(ScavTrap const & rhs);
		~ScavTrap(void);

		void	attack(const std::string & target);
		void	attack(ScavTrap & target);
		void	guardGate(void);
};

#endif
