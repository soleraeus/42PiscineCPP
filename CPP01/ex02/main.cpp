/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:49:23 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/23 11:57:13 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string	myString("HI THIS IS BRAIN");
	std::string *stringPTR = &myString;
	std::string& stringREF = myString;

	std::cout << "Memory address of string variable: " << &myString << std::endl;
	std::cout << "Memory address of string pointer: " << stringPTR << std::endl;
	std::cout << "Memory address of string reference: " << &stringREF << std::endl;
	std::cout << "Value of string variable: " << myString << std::endl;
	std::cout << "Value of string pointer: " << *stringPTR << std::endl;
	std::cout << "Value of string reference: " << stringREF << std::endl;
}
