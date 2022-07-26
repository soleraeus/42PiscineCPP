/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:17:48 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/26 13:02:10 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"
#include "Fixed.hpp"

int	main(void)
{
	::Array<int>					A(10);
	::Array<int>					B;
	::Array<Fixed>					F(6);
//	Array<unsigned long long>	C(4294967295);
	int * a = new int();

	std::cout << "new int: " << *a << std::endl;
	delete a;
	std::cout << "Printing values in array after construction and before assignation" << std::endl;
	for (unsigned int i = 0 ; i < A.size(); i++)
		std::cout << A[i] << std::endl;
	std::cout << "Assignation from 0 to 9 using [] operator" << std::endl;
	for (int i = 0; i < 10; i++)
		A[i] = i;
	std::cout << "Printing values in array after assignation with [] operator" << std::endl;
	for (unsigned int i = 0 ; i < A.size(); i++)
		std::cout << A[i] << std::endl;
	std::cout << "Trying out of range index" << std::endl;
	try
	{
		int	tmp = A[20];
		std::cout << "Element at index 20: " << tmp << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cerr << "Error while trying to access element at index 20: " << e.what() << std::endl;
	}
	std::cout << "Accesing array elements from the back with negative numbers and [] operator" << std::endl;
	try
	{
		long long	it = 0;
		while (--it)
			std::cout << A[it] << std::endl;
	}
	catch (std::exception const & e) {};
	std::cout << "Printing values in array of class Fixed after construction" << std::endl;
	for (unsigned int i = 0 ; i < F.size(); i++)
		std::cout << F[i] << std::endl;
	F[0] = 42.42f;
	F[1] = -55;
	F[2] = 7;
	F[3] = 5.247f;
	F[4] = -4.341f;
	F[5] = 0.001f;
	std::cout << "Printing values in array of class Fixed after assignation with [] operator" << std::endl;
	for (unsigned int i = 0 ; i < F.size(); i++)
		std::cout << F[i] << std::endl;
	return (0);
}
