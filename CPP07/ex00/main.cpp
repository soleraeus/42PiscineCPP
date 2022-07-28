/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:25:21 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/28 12:18:55 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "swap.hpp"
#include "min.hpp"
#include "max.hpp"
#include "Fixed.hpp"

int	main(void)
{
	int a = 2;
	int b = 3;
	
	std::cout << "Tests from subject" << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	int const	a1 = -25;
	int const	b1 = -42;
	Fixed	e(23.95f);
	Fixed	f(1000.05f);

	std::cout << std::endl << std::endl << "Custom tests" << std::endl;
	std::cout << "Pre-swap a1: " << a1 << ", b1: " << b1 << std::endl;
	::swap<int const>(a1, b1);
	std::cout << "Post-swap a1: " << a1 << ", b1: " << b1 << std::endl;
	std::cout << "Max is: " << ::max<int const>(a1, b1) << std::endl;
	std::cout << "Min is: " << ::min<int const>(a1, b1) << std::endl;
	std::cout << std::endl;

	std::cout << "Pre-swap Fixed e: " << e << ", Fixed f: " << f << std::endl;
	::swap<Fixed>(e, f);
	std::cout << "Post-swap Fixed c: " << e << ", Fixed d: " << f << std::endl;
	std::cout << "Max is: " << ::max<Fixed>(e, f) << std::endl;
	std::cout << "Min is: " << ::min<Fixed>(e, f) << std::endl;
	std::cout << std::endl;

	return (0);
}
