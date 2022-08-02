/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:17:02 by bdetune           #+#    #+#             */
/*   Updated: 2022/08/02 18:27:09 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shellColors.hpp"
#include "Span.hpp"

int main()
{
	Span sp = Span(10);
	Span sp2	= Span(1000000);
	std::list<int>	a(5, 98);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	sp.printList();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	int i = 0;
	try
	{
		while (true)
		{
			sp2.addNumber(i);
			i += 3;
		}
	}
	catch (std::exception const & e)
	{
		std::cerr << RED << "Caught exception: " << e.what() << OFF << std::endl;
	}
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	try
	{
		sp.addRange(a.begin(), a.end());
	}
	catch (std::exception const & e)
	{
		std::cerr << "Error while adding range to Span: " << e.what() << std::endl;
	}
	sp.printList();
	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	return 0;
}
