/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:48:33 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/04 14:41:37 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
/*	ClapTrap	Clap1;
	ClapTrap	Clap2(std::string("John"));
	ClapTrap	Clap3(std::string("Harry"));
	ClapTrap	Clap4 = Clap2;

	Clap1.attack(std::string("John"));
	Clap2.takeDamage(400);
	Clap2.beRepaired(400);
	Clap1.attack(std::string("John"));
	Clap2.takeDamage(400);
	Clap1.attack(std::string("John"));
	Clap2.takeDamage(400);
	Clap1.attack(std::string("John"));
	Clap2.takeDamage(400);
	Clap1.attack(std::string("John"));
	Clap2.takeDamage(400);
	Clap1.attack(std::string("John"));
	Clap2.takeDamage(400);
	Clap1.attack(std::string("John"));
	Clap2.takeDamage(400);
	Clap1.attack(std::string("John"));
	Clap2.takeDamage(400);
	Clap1.attack(std::string("John"));
	Clap2.takeDamage(400);
	Clap1.attack(std::string("John"));
	Clap2.takeDamage(400);
	Clap1.attack(std::string("John"));
	Clap2.takeDamage(400);
	Clap4.attack(Clap3);
	Clap4.attack(Clap3);
	Clap4.beRepaired(2);*/

//	ScavTrap	Scav1;

//	ScavTrap	Scav2(std::string("John"));

	ScavTrap	Scav1;
	ScavTrap	Scav2(std::string("John"));
	ScavTrap	Scav3(std::string("Harry"));
	ScavTrap	Scav4 = Scav2;

	Scav1.attack(std::string("John"));
	Scav2.takeDamage(400);
	Scav2.beRepaired(400);
	Scav1.attack(std::string("John"));
	Scav2.takeDamage(400);
	Scav1.attack(std::string("John"));
	Scav2.takeDamage(400);
	Scav1.attack(std::string("John"));
	Scav2.takeDamage(400);
	Scav1.attack(std::string("John"));
	Scav2.takeDamage(400);
	Scav1.attack(std::string("John"));
	Scav2.takeDamage(400);
	Scav1.attack(std::string("John"));
	Scav2.takeDamage(400);
	Scav1.attack(std::string("John"));
	Scav2.takeDamage(400);
	Scav1.attack(std::string("John"));
	Scav2.takeDamage(400);
	Scav1.attack(std::string("John"));
	Scav2.takeDamage(400);
	Scav1.attack(std::string("John"));
	Scav2.takeDamage(400);
	Scav4.attack(Scav3);
	Scav4.attack(Scav3);
	Scav3.attack(Scav2);
	Scav4.beRepaired(2);
	Scav4.guardGate();

	return (0);
}