/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:48:33 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/20 17:48:30 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	Frag1;
	FragTrap	Frag2(std::string("John"));
	FragTrap	Frag3(std::string("Harry"));
	FragTrap	Frag4 = Frag2;

	Frag1.attack(std::string("John"));
	Frag2.takeDamage(400);
	Frag2.beRepaired(400);
	Frag1.attack(std::string("John"));
	Frag2.takeDamage(400);
	Frag1.attack(std::string("John"));
	Frag2.takeDamage(400);
	Frag1.attack(std::string("John"));
	Frag2.takeDamage(400);
	Frag1.attack(std::string("John"));
	Frag2.takeDamage(400);
	Frag1.attack(std::string("John"));
	Frag2.takeDamage(400);
	Frag1.attack(std::string("John"));
	Frag2.takeDamage(400);
	Frag1.attack(std::string("John"));
	Frag2.takeDamage(400);
	Frag1.attack(std::string("John"));
	Frag2.takeDamage(400);
	Frag1.attack(std::string("John"));
	Frag2.takeDamage(400);
	Frag1.attack(std::string("John"));
	Frag2.takeDamage(400);
	Frag4.attack(Frag3);
	Frag4.attack(Frag3);
	Frag3.attack(Frag2);
	Frag4.beRepaired(2);
	ScavTrap	Emile(std::string("Emile"));
	Frag3.attack(Emile);
	ClapTrap	Milton(std::string("Milton"));
	Frag3.attack(Milton);
	Frag4.highFivesGuys();

	return (0);
}
