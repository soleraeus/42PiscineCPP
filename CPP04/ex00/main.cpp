/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:40:27 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/25 11:01:39 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

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

	std::cout << "****** Let's do it wrong ******" << std::endl;
	const WrongAnimal* meta_w = new WrongAnimal();
	const WrongAnimal* i_w = new WrongCat();
	
	std::cout << i_w->getType() << " " << std::endl;
	i_w->makeSound(); //will output the wrond animal sound!
	meta_w->makeSound();
	delete i_w;
	delete meta_w;

	const WrongCat*	w_c = new WrongCat();
	std::cout << w_c->getType() << " " << std::endl;
	w_c->makeSound(); //will output the wrond cat sound!
	delete w_c;

	return (0);
}
