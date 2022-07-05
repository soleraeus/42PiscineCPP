/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:59:09 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/05 13:04:57 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class	FragTrap: public virtual ClapTrap
{
	public :
		FragTrap(void);
		FragTrap(std::string const & name);
		FragTrap(FragTrap const & src);
		FragTrap & operator=(FragTrap const & rhs);
		~FragTrap(void);

		void	attack(const std::string & target);
		void	attack(ClapTrap & target);
		void	highFivesGuys(void);
};

#endif
