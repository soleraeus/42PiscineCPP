/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 18:41:54 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/22 19:04:21 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T, typename U, typename V>
void	iter(T array, U size, V function)
{
	for (U i = 0; i < size; i++)
	{
		try
		{
			function(array[i]);
		}
		catch (std::exception const & e)
		{
			std::cerr << "Error while applying function to array: " << e.what() << std::endl;
		}
	}
}

#endif
