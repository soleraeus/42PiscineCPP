/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:17:48 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/28 14:47:04 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"
#include "Fixed.hpp"
#include "shellColors.hpp"

int	main(void)
{
	::Array<int>					A(10);
	::Array<int>					B;
	::Array<Fixed>					F(6);
//	Array<unsigned long long>	C(4294967295);

	std::cout << GREEN << "Printing values in array after construction and before assignation" << OFF << std::endl;
	for (unsigned int i = 0 ; i < A.size(); i++)
		std::cout << A[i] << "  ";
	std::cout << std::endl << std::endl;
	std::cout << GREEN << "Assignation from 0 to 9 using [] operator" << OFF << std::endl;
	for (int i = 0; i < 10; i++)
		A[i] = i;
	std::cout << GREEN << "Printing values in array after assignation with [] operator" << OFF << std::endl;
	for (unsigned int i = 0 ; i < A.size(); i++)
		std::cout << A[i] << "  ";
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << GREEN << "Trying out of range index" << OFF << std::endl;
	try
	{
		int	tmp = A[20];
		std::cout << "Element at index 20: " << tmp << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cerr << RED << "Error while trying to access element at index 20: " << e.what() << OFF << std::endl;
	}
	std::cout << std::endl;
	std::cout << GREEN << "Accessing array elements from the back with negative numbers and [] operator" << OFF << std::endl;
	try
	{
		long long	it = 0;
		while (--it)
			std::cout << A[it] << "  ";
	}
	catch (std::exception const & e) {};
	std::cout << std::endl << std::endl;
	std::cout << GREEN << "Trying to print values from array B initialized by default" << OFF << std::endl;
	for (unsigned int i = 0 ; i < B.size(); i++)
		std::cout << B[i] << "  ";
	std::cout << std::endl;
	B = A;
	std::cout << GREEN << "Trying to print values from array B after using assignation operator with A" << OFF << std::endl;
	for (unsigned int i = 0 ; i < B.size(); i++)
		std::cout << B[i] << "  ";
	std::cout << std::endl << std::endl;
	std::cout << GREEN << "Printing values in B after modification with the [] operator (*2 on each element)" << OFF << std::endl;
	for (unsigned int i = 0 ; i < B.size(); i++)
		B[i] *= 2;
	for (unsigned int i = 0 ; i < B.size(); i++)
		std::cout << B[i] << "  ";
	std::cout << std::endl << std::endl;
	std::cout << GREEN << "Printing values in A to make sure copy is deep" << OFF << std::endl;
	for (unsigned int i = 0 ; i < A.size(); i++)
		std::cout << A[i] << "  ";
	std::cout << std::endl << std::endl;
	std::cout << GREEN << "Printing values in array of class Fixed after construction" << OFF << std::endl;
	for (unsigned int i = 0 ; i < F.size(); i++)
		std::cout << F[i] << "  ";
	std::cout << std::endl << std::endl;
	F[0] = 42.42f;
	F[1] = -55;
	F[2] = 7;
	F[3] = 5.247f;
	F[4] = -4.341f;
	F[5] = 0.001f;
	std::cout << GREEN << "Printing values in array of class Fixed after assignation with [] operator" << OFF << std::endl;
	for (unsigned int i = 0 ; i < F.size(); i++)
		std::cout << F[i] << "  ";
	std::cout << std::endl;
	return (0);
}


/*
#define MAX_VAL 750
int main(void)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
	std::cout << "End of test main" << std::endl;
    return 0;
}*/
