/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:17:02 by bdetune           #+#    #+#             */
/*   Updated: 2022/08/02 19:49:38 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shellColors.hpp"
#include "Span.hpp"

int main()
{
	Span sp = Span(21);
	Span sp2	= Span(1000000);
	int	test[] = {0, 1, 2, 3, 4};
	std::list<int>	a(5, 98);


	sp.print();
	//shortest and longest span on empty list
	std::cout << GREEN << "		Shortest and longest span on empty list" << std::endl << std::endl << OFF;
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cerr << RED << "Exception raised: " << e.what() << OFF << std::endl << std::endl;
	}
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cerr << RED << "Exception raised: " << e.what() << OFF << std::endl << std::endl;
	}

	sp.addNumber(6);

	//shortest and longest span on list of 1 element
	std::cout << GREEN << "		Shortest and longest span on list of 1 element" << std::endl << std::endl << OFF;
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cerr << RED << "Exception raised: " << e.what() << OFF << std::endl << std::endl;
	}
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cerr << RED << "Exception raised: " << e.what() << OFF << std::endl << std::endl;
	}

	//Adding more numbers
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << GREEN << "		Current content of Span" << std::endl << OFF;
	sp.print();
	std::cout << std::endl;
	std::cout << GREEN << "		Shortest and longest span of above Span object" << std::endl << OFF;
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cerr << RED << "Exception raised: " << e.what() << OFF << std::endl << std::endl;
	}
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cerr << RED << "Exception raised: " << e.what() << OFF << std::endl << std::endl;
	}
	std::cout << std::endl;

	//1,000,000 ints span
	std::cout << GREEN << "Filling 1,000,000 int Span object until exception is raised with +3 step, starting at -42" << OFF << std::endl;
	int i = -42;
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
	std::cout << std::endl;
	std::cout << GREEN << "	Shortest and longest span of 1,000,000 int Span object" << std::endl << OFF;
	try
	{
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cerr << RED << "Exception raised: " << e.what() << OFF << std::endl << std::endl;
	}
	try
	{
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cerr << RED << "Exception raised: " << e.what() << OFF << std::endl << std::endl;
	}
	std::cout << std::endl;
	std::cout << GREEN << "Adding elements to first Span object with range of iterators until exception is raised (capacity is 21)" << std::endl << "First range is 5 times 98 (with std::list<int>::iterator)" << std::endl << "Next ranges are pointers on array of int {0, 1, 2, 3, 4}" << OFF << std::endl;
	try
	{
		sp.addRange(a.begin(), a.end());
		sp.addRange(test, test+5);
		sp.addRange(test, test+5);
		sp.addRange(test, test+5);
	}
	catch (std::exception const & e)
	{
		std::cerr << RED << "Error while adding range to Span: " << e.what() << std::endl << OFF;
	}
	std::cout << std::endl;
	std::cout << GREEN << "Printing current Span of capacity 21 (should be 20 elements)" << OFF << std::endl;
	sp.print();
	std::cout << std::endl;
	std::cout << GREEN << "		Shortest and longest span of above Span object" << std::endl << OFF;
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cerr << RED << "Exception raised: " << e.what() << OFF << std::endl << std::endl;
	}
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cerr << RED << "Exception raised: " << e.what() << OFF << std::endl << std::endl;
	}
	return 0;
}
