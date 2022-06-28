/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:44:22 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/28 14:27:23 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	Harl		harl;
	int			index;
	std::string	arg;
	std::string	filter[]={"DEBUG", "INFO", "WARNING", "ERROR"};

	if (ac != 2)
		return (1);
	arg = av[1];
	index = 0;
	while (index < 4)
	{
		if (arg == filter[index])
			break;
		index++;
	}
	switch(index)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain(arg);
			std::cout << std::endl;
			arg = "INFO";
			++index;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain(arg);
			std::cout << std::endl;
			arg = "WARNING";
			++index;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain(arg);
			std::cout << std::endl;
			arg = "ERROR";
			++index;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain(arg);
			std::cout << std::endl;
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
	return (0);
}
