/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:17:02 by bdetune           #+#    #+#             */
/*   Updated: 2022/08/02 11:44:45 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(20);
	Span sp2	= Span(100000);
	std::list<int>	a(5, 98);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	sp.printList();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	int i = -1000;
	try
	{
		while (true)
		{
			sp2.addNumber(i);
			i += 2;
		}
	}
	catch (std::exception const & e)
	{
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
//	sp2.printList();
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	sp.addRange(a.begin(), a.end());
	sp.printList();
	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	return 0;
}
