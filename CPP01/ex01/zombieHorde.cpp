/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:06:26 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/06 15:10:53 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*zombieHorde;

	if (N <= 0)
	{
		std::cerr << "Cannot get a horde of " << N << " Zombies" << std::endl;
		return (NULL);
	}
	try 
	{
		zombieHorde = new Zombie[N];
	}
	catch (std::bad_alloc const & e)
	{
		std::cerr << "Error creating horde of size " << N << " with name " << name << ": " << e.what() << std::endl;
		return (NULL);
	}
	if (!zombieHorde)
	{
		std::cerr << "Error creating horde of size " << N << " with name " << name << std::endl;
		return (NULL);
	}
	for (int j = 0; j < N; j++)
		zombieHorde[j].setName(name);
	return (zombieHorde);
}
