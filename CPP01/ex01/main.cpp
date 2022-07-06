/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:36:05 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/06 15:12:43 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

Zombie* zombieHorde( int N, std::string name );

void	createAndAnnouceHorde(int N, std::string name)
{
	Zombie	*zombieH;

	zombieH = zombieHorde(N, name);
	if (!zombieH)
		return ;
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
	createAndAnnouceHorde(std::numeric_limits<int>::max(), "GOD");
	return (0);
}
