/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:17:26 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/04 13:59:57 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class	ClapTrap
{
	public :
		ClapTrap(void);
		ClapTrap(std::string const & name);
		ClapTrap(ClapTrap const & src);
		ClapTrap &	operator=(ClapTrap const & rhs);
		~ClapTrap(void);

		void	attack(const std::string & target);
		void	attack(ClapTrap & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int	amount);

	protected :
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;	
};

#endif
