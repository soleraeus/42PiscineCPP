/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:18:58 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/19 13:45:11 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void)
{
	Base*	ret;
	int		instance = rand() % 3;

	switch (instance)
	{
		case 0:
			ret = new (std::nothrow) A;
			std::cout << "Creating an object of class A" << std::endl;
			break;
		case 1:
			ret = new (std::nothrow) B;
			std::cout << "Creating an object of class B" << std::endl;
			break;
		default:
			ret = new (std::nothrow) C;
			std::cout << "Creating an object of class C" << std::endl;
			break;
	}
	return (ret);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Identified an object of class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Identified an object of class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Identified an object of class C" << std::endl;
	else
		std::cout << "Could not find a matching class for this pointer" << std::endl;
}

void identify(Base & p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Identified an object of class A" << std::endl;
		return ;
	}
	catch(std::exception const & e){};
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Identified an object of class B" << std::endl;
		return ;
	}
	catch(std::exception const & e){};
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Identified an object of class C" << std::endl;
		return ;
	}
	catch(std::exception const & e)
	{
		std::cout << "Could not find a matching class for this reference" << std::endl;
	};
}

int	main(void)
{
	Base*	tmp;

	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Generating class" << std::endl;
		tmp = generate();
		if (!tmp)
		{
			std::cerr << "Fatal error while creating class, stopping program" << std::endl;
			return (1);
		}
		std::cout << "Identification of the class generated from the pointer" <<std::endl;
		identify(tmp);
		std::cout << "Identification of the class generated from the reference" <<std::endl;
		identify(*tmp);
		delete tmp;
	}
	return (0);
}
