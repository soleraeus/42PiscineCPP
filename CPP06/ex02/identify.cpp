/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:50:57 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/28 11:57:10 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

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
