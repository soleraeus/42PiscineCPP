/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:18:58 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/28 11:52:53 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void);
void	identify(Base* p);
void	identify(Base & p);

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
		std::cout << std::endl << std::endl;
		delete tmp;
	}
	return (0);
}
