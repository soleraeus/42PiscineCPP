/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:18:36 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/22 18:28:29 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_HPP
# define SWAP_HPP

template<typename T>
void	swap(T & x, T & y)
{
	try
	{
		T	temp = x;
	
		x = y;
		y = temp;
	}
	catch (std::exception const & e)
	{
		std::cerr << "Error while swaping values: " << e.what() << std::endl;
	}
}

template<typename T>
void	swap(T const & x, T const & y)
{
	(void)x;
	(void)y;
	std::cerr << "Cannot swap const values" << std::endl;
}

#endif
