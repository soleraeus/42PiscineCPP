/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:48:33 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/04 13:55:38 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Clap1;
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
	Clap4.beRepaired(2);

	return (0);
}
