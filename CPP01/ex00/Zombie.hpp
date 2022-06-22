/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:17:25 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/22 19:30:37 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class	Zombie
{
	public :
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void		setName(std::string name);
		std::string	getName(void) const;
		void		announce(void);
	
	private :
		std::string	_name;
};

#endif
