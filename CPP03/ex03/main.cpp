/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:48:33 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/21 13:06:34 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	Diamond1;
	DiamondTrap	Diamond2(std::string("John"));
	DiamondTrap	Diamond4 = Diamond2;

	Diamond2.attack(std::string("Lola"));
	Diamond2.attack(Diamond1);
	Diamond2.guardGate();
	Diamond2.highFivesGuys();
	Diamond1.whoAmI();
	Diamond2.whoAmI();
	Diamond4.whoAmI();

	ScavTrap	scav(std::string("Scav"));
	Diamond2.attack(scav);

	FragTrap	frag(std::string("Frag"));
	Diamond2.attack(frag);

	return (0);
}
