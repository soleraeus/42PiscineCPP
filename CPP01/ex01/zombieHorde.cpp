/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:06:26 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/23 11:09:39 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*zombieHorde;

	if (N <= 0)
	{
		std::cout << "Cannot get a horde of " << N << " Zombies" << std::endl;
		return (NULL);
	}
	zombieHorde = new Zombie[N];
	for (int j = 0; j < N; j++)
		zombieHorde[j].setName(name);
	return (zombieHorde);
}
