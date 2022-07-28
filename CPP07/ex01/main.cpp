/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:25:21 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/28 12:38:43 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"
#include "Fixed.hpp"

template<typename T>
void	square(T & x)
{
	x *=x;
}

void	print_minus_1(int x)
{
	std::cout << (x-1) << std::endl;
}

void	increment(Fixed & a)
{
	++a;
	++a;
}

int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	std::cout << "Array of int" << std::endl;
	std::cout << "Array before iter: " << std::endl;
	for (int i = 0; i < 11; i++)
	{
		std::cout << tab[i] << "  ";
	}
	std::cout << std::endl;
	::iter(tab, 11, ::square<int>);
	std::cout << "Array after iter elevating to power of 2 each element: " << std::endl;
	for (int i = 0; i < 11; i++)
	{
		std::cout << tab[i] << "  ";
	}
	std::cout << std::endl;
	std::cout << "Second iter printing an int param -1" << std::endl;
	::iter(tab, 11, ::print_minus_1);
	std::cout << std::endl;

	std::cout << "Testing with array of fixed" << std::endl;
	Fixed	fixedArray[10];
	for (int i = 0; i < 10; i++)
		fixedArray[i] = Fixed(i) + Fixed(static_cast<float>(i)/10);
	std::cout << "Fixed array before iter: " << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << fixedArray[i] << "  ";
	std::cout << std::endl;
	::iter(fixedArray, 10, ::increment);
	std::cout << "Fixed array after iter calling twice pre-crement operator: " << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << fixedArray[i] << "  ";
	std::cout << std::endl;
	return (0);
}
