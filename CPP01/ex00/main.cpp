/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:36:05 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/06 15:40:48 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define NB_ZOMBIE 4

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie	*Z;

	for (int i = 0; i < NB_ZOMBIE; i++)
		randomChump("Harry");
	for (int i = 0; i < NB_ZOMBIE; i++)
	{
		Z = newZombie("Jack");
		if (Z)
		{
			Z->announce();
			delete Z;
		}
	}
	return (0);
}
