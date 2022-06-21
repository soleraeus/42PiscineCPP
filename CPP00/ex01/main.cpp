/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:13:38 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/21 15:40:38 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int	main(void)
{
	std::string	cmd;
	PhoneBook	myPhoneBook;

	std::cout << "Welcome to the phone book" << std::endl << "Valid commands are ADD, SEARCH and EXIT" << std::endl;
	do
	{
		std::cout << "Please enter a command: ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			myPhoneBook.addContact();
		else if (cmd == "SEARCH")
			myPhoneBook.searchContact();
	} while (cmd != "EXIT" && !std::cin.eof());
	return (0);
}
