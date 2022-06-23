/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:36:05 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/23 11:49:56 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <iomanip>

Zombie* zombieHorde( int N, std::string name );

void	createAndAnnouceHorde(int N, std::string name)
{
	Zombie	*zombieH;

	zombieH = zombieHorde(N, name);
	if (!zombieH)
	{
		std::cout << "Could not create the horde" << std::endl;
		return ;
	}
	std::cout << "Horde created succesfully" << std::endl;
	for (int i = 0; i < N; i++)
	{
		std::cout << i + 1 << " ";
		zombieH[i].announce();
	}
	delete [] zombieH;
}

int	main(void)
{
	createAndAnnouceHorde(-25, "Jack");
	createAndAnnouceHorde(0, "John");
	createAndAnnouceHorde(1, "Milly");
	createAndAnnouceHorde(5, "James");
	createAndAnnouceHorde(100, "Jesus");
	return (0);
}
