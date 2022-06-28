/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:31:16 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/28 10:35:41 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <string>

class	Harl
{
	public :

		Harl(void);
		~Harl(void);

		void	complain(std::string level);
	
	private :

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif
