/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 17:02:02 by bdetune           #+#    #+#             */
/*   Updated: 2022/08/02 19:58:47 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <iterator>
#include "shellColors.hpp"
#include "easyfind.hpp"

int	main(void)
{
	std::list<int>						lst;
	std::vector<int>					vct(5, 98);
	std::list<int>::const_iterator		retLst;
	std::vector<int>::const_iterator	retVct;

	//Find on empty list
	std::cout << BLUE << "Find on empty list" << OFF << std::endl;
	retLst = ::easyfind<std::list<int> >(lst, 2);
	if (retLst == lst.end())
		std::cout << RED << "Number 2 not found in list" << OFF << std::endl;

	std::cout << std::endl << BLUE << "Find on list of numbers from 0 to 9" << OFF << std::endl;
	for (std::size_t i = 0; i < 10; i++)
		lst.push_back(i);
	retLst = ::easyfind<std::list<int> >(lst, 2);
	if (retLst == lst.end())
		std::cout << RED << "Number 2 not found in list" << OFF << std::endl;
	else
		std::cout << GREEN << "Number 2 found in list" << OFF << std::endl;
	retLst = ::easyfind<std::list<int> >(lst, -5);
	if (retLst == lst.end())
		std::cout << RED << "Number -5 not found in list" << OFF << std::endl;
	else
		std::cout << GREEN << "Number -5 found in list" << OFF << std::endl;
	std::cout << std::endl << BLUE << "Find on vector of 5 time 98" << OFF << std::endl;
	retVct = ::easyfind<std::vector<int> >(vct, -65);
	if (retVct == vct.end())
		std::cout << RED << "Number -65 not found in vector" << OFF << std::endl;
	else
		std::cout << GREEN << "Number -65 found in vector" << OFF << std::endl;
	retVct = ::easyfind<std::vector<int> >(vct, 98);
	if (retVct == vct.end())
		std::cout << RED << "Number 98 not found in vector" << OFF << std::endl;
	else
		std::cout << GREEN << "Number 98 found in vector" << OFF << std::endl;

	return (0);
}
