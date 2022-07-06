/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:44:22 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/06 15:36:42 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	Harl		harl;
	std::string	arg;

	for (int i = 1; i < ac; i++)
	{
		arg = av[i];
		harl.complain(arg);
	}
	if (ac == 1)
	{
		std::cout << "**************************************" << std::endl;
		std::cout << "No arguments provided, switching to basic escalation (someone send the manager already)" << std::endl;
		std::cout << "**************************************" << std::endl;
		harl.complain(std::string("DEBUG"));
		harl.complain(std::string("INFO"));
		harl.complain(std::string("WARNING"));
		harl.complain(std::string("ERROR"));
	}
	return (0);
}
