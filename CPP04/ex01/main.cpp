/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:40:27 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/08 18:58:31 by bdetune          ###   ########.fr       */
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

	for (int i = 0; i < 3; i++)
		animals[i] = new Dog();
	for (int i = 3; i < 6; i++)
		animals[i] = new Cat();
	for (int i = 0; i < 6; i++)
		delete animals[i];
	/******************** Deep copy *******************/
	std::cout << "****************************" << std::endl;
	Dog			*dog0 = new Dog();
	dog0->addIdea(std::string("Eat"));
	dog0->addIdea(std::string("Sleep"));
	dog0->addIdea(std::string("Play"));
	Dog			*dog1 = new Dog(*dog0);

	std::cout << "** Ideas from Dog 1 **" << std::endl;
	std::string *ideas = dog1->getIdeas();
	for (int i = 0 ; i < dog1->getNbIdeas(); i++)
		std::cout << "Here is a new idea from dog1: " << ideas[i] << std::endl;
	delete [] ideas;
	delete dog1->removeIdea();
	delete dog1->removeIdea();
	std::cout << "** Ideas from Dog 1 after two removal**" << std::endl;
	ideas = dog1->getIdeas();
	for (int i = 0 ; i < dog1->getNbIdeas(); i++)
		std::cout << "Here is a new idea from dog1: " << ideas[i] << std::endl;
	delete [] ideas;
	std::cout << "** Ideas from Dog 0**" << std::endl;
	ideas = dog0->getIdeas();
	for (int i = 0 ; i < dog0->getNbIdeas(); i++)
		std::cout << "Here is a new idea from dog0: " << ideas[i] << std::endl;
	delete [] ideas;
	delete dog0;
	delete dog1;
	return (0);
}
