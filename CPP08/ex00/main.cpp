/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 17:02:02 by bdetune           #+#    #+#             */
/*   Updated: 2022/08/03 11:48:41 by bdetune          ###   ########.fr       */
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
	int									vals[] = {42, 55, 78, -58, 7};
	std::list<int>						lst;
	std::vector<int>					vct(5, 98);
	std::deque<int>						deq(vals, vals+5);
	std::list<int>::const_iterator		retLst;
	std::vector<int>::const_iterator	retVct;
	std::deque<int>::const_iterator		retDeq;


	/******************** Find on empty list *************************/
	std::cout << BLUE << "Find on empty list" << OFF << std::endl;
	retLst = ::easyfind<std::list<int> >(lst, 2);
	if (retLst == lst.end())
		std::cout << RED << "Number 2 not found in list" << OFF << std::endl;

	/******************* Find on list 0 to 9 ************************/
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

	/****************** Find on vector with 5 times 98 *************/
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

	/***** Find on deque built from array {42, 55, 78, -58, 7} ******/
	std::cout << std::endl << BLUE << "Find on deque built from array {42, 55, 78, -58, 7}" << OFF << std::endl;
	retDeq = ::easyfind<std::deque<int> >(deq, 3);
	if (retDeq == deq.end())
		std::cout << RED << "Number 3 not found in deque" << OFF << std::endl;
	else
		std::cout << GREEN << "Number 3 found in deque" << OFF << std::endl;
	retDeq = ::easyfind<std::deque<int> >(deq, -58);
	if (retDeq == deq.end())
		std::cout << RED << "Number -58 not found in deque" << OFF << std::endl;
	else
		std::cout << GREEN << "Number -58 found in deque" << OFF << std::endl;


	return (0);
}
