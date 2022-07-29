/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 17:02:02 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/29 17:45:35 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <iterator>
#include "easyfind.hpp"

int	main(void)
{
	std::list<int>				lst;
	std::list<int>::const_iterator	ret;

	for (std::size_t i = 0; i < 10; i++)
		lst.push_back(i);
	ret = ::easyfind<std::list<int> >(lst, 12);
	if (ret != lst.end())
		std::cout << *ret << std::endl;
	return (0);
}
