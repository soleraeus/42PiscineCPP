/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:40:27 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/25 12:21:34 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete i;
	delete j;
	delete meta;

	/******************** Animal table *******************/
	std::cout << "****************************" << std::endl;
	Animal	*animals[6];

	for (int x = 0; x < 3; x++)
		animals[x] = new Dog();
	for (int x = 3; x < 6; x++)
		animals[x] = new Cat();
	for (int x = 0; x < 6; x++)
		delete animals[x];
	/******************** Deep copy *******************/
	std::cout << "****************************" << std::endl;
	Dog			*dog0 = new Dog();
	dog0->addIdea(std::string("Eat"));
	dog0->addIdea(std::string("Sleep"));
	dog0->addIdea(std::string("Play"));
	Dog			*dog1 = new Dog(*dog0);
	Dog			*dog2 = new Dog;

	std::cout << "** Ideas from Dog 1 **" << std::endl;
	std::string *ideas = dog1->getIdeas();
	for (int x = 0 ; x < dog1->getNbIdeas(); x++)
		std::cout << "Here is a new idea from dog1: " << ideas[x] << std::endl;
	delete [] ideas;
	delete dog1->removeIdea();
	delete dog1->removeIdea();
	std::cout << "** Ideas from Dog 1 after two removal**" << std::endl;
	ideas = dog1->getIdeas();
	for (int x = 0 ; x < dog1->getNbIdeas(); x++)
		std::cout << "Here is a new idea from dog1: " << ideas[x] << std::endl;
	delete [] ideas;
	std::cout << "** Ideas from Dog 0**" << std::endl;
	ideas = dog0->getIdeas();
	for (int x = 0 ; x < dog0->getNbIdeas(); x++)
		std::cout << "Here is a new idea from dog0: " << ideas[x] << std::endl;
	delete [] ideas;
	*dog2 = *dog0;
	std::cout << "Destruction of all dogs but dog2" << std::endl;
	delete dog0;
	delete dog1;
	ideas = dog2->getIdeas();
	for (int x = 0 ; x < dog2->getNbIdeas(); x++)
		std::cout << "Here is a new idea from dog2: " << ideas[x] << std::endl;
	delete [] ideas;
	delete dog2;
	return (0);
}
