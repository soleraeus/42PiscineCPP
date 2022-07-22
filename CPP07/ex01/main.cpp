/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:25:21 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/22 19:03:28 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

template<typename T>
void	square(T & x)
{
	x *=x;
}

void	print_minus_1(int x)
{
	std::cout << (x-1) << std::endl;
}

int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	std::cout << "Array before iter: " << std::endl;
	for (int i = 0; i < 11; i++)
	{
		std::cout << tab[i] << std::endl;
	}
	::iter(tab, 11, square<int>);
	std::cout << "Array after iter: " << std::endl;
	for (int i = 0; i < 11; i++)
	{
		std::cout << tab[i] << std::endl;
	}
	std::cout << "With function -1" << std::endl;
	::iter(tab, 11, print_minus_1);
	return (0);
}
