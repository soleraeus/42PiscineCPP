/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:22:19 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/25 12:09:50 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	AMateria* tmp2;
	AMateria* tmp3;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);
	tmp3 = src->createMateria("fire");
	if (tmp == NULL)
		std::cerr << "Cannot create materia fire" << std::endl;
	else
		me->equip(tmp3);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	ICharacter*	me_too = new Character(*(dynamic_cast<Character *>(me)));
	me->unequip(2);
	me->unequip(0);
	me->use(0, *bob);
	me->use(1, *bob);
	delete me;
	delete src;
	delete tmp;
	me_too->use(0, *bob);
	me_too->use(1, *bob);
	delete bob;
	delete me_too;
	return (0);
}
