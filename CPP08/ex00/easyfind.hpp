/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:46:38 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/29 17:45:11 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <iterator>
# include <iostream>

template<typename T>
typename T::const_iterator	easyfind(T const & haystack, int needle)
{
	typename T::const_iterator	begin = haystack.begin();
	typename T::const_iterator	end = haystack.end();
	typename T::const_iterator	ret = haystack.end();

	if ((ret = std::find< typename T::const_iterator>(begin, end, needle)) != end)
	{
		std::cout << "Occurence found in container" << std::endl;
		return (ret);
	}
	else
		std::cout << "Occurence not found in container" << std::endl;
	return (ret);
}

#endif
