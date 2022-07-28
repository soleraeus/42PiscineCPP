/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:50:25 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/28 11:50:52 by bdetune          ###   ########.fr       */
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
