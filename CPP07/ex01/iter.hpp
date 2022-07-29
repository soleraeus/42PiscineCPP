/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 18:41:54 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/29 11:58:48 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T, typename U>
void	iter(T array, std::size_t size, U function)
{
	for (std::size_t i = 0; i < size; i++)
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
