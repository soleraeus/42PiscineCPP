/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:46:38 by bdetune           #+#    #+#             */
/*   Updated: 2022/08/02 19:41:56 by bdetune          ###   ########.fr       */
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
	return (std::find< typename T::const_iterator, int>(haystack.begin(), haystack.end(), needle));
}

#endif
