/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:25:21 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/28 14:51:50 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"
#include "Fixed.hpp"
#include "shellColors.hpp"

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

	std::cout << GREEN << "Array of int" << OFF << std::endl;
	std::cout << GREEN << "Array before iter: " << OFF << std::endl;
	for (int i = 0; i < 11; i++)
	{
		std::cout << tab[i] << "  ";
	}
	std::cout << std::endl;
	::iter(tab, 11, ::square<int>);
	std::cout << GREEN << "Array after iter elevating to power of 2 each element: " << OFF << std::endl;
	for (int i = 0; i < 11; i++)
	{
		std::cout << tab[i] << "  ";
	}
	std::cout << std::endl;
	std::cout << GREEN << "Second iter with func printing an int param -1" << OFF << std::endl;
	::iter(tab, 11, ::print_minus_1);
	std::cout << std::endl;

	std::cout << GREEN << "Testing with array of fixed" << OFF << std::endl;
	Fixed	fixedArray[10];
	for (int i = 0; i < 10; i++)
		fixedArray[i] = Fixed(i) + Fixed(static_cast<float>(i)/10);
	std::cout << GREEN << "Fixed array before iter: " << OFF << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << fixedArray[i] << "  ";
	std::cout << std::endl;
	::iter(fixedArray, 10, ::increment);
	std::cout << GREEN << "Fixed array after iter calling twice pre-crement operator: " << OFF << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << fixedArray[i] << "  ";
	std::cout << std::endl;
	return (0);
}
