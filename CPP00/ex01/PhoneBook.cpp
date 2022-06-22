/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:40:54 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/22 14:51:24 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void): _currentIndex(0), _nbContacts(0)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::addContact(void)
{
	if (this->_currentIndex >= 8)
		this->_currentIndex = 0;
	this->_contacts[this->_currentIndex].askFirstName();
	if (std::cin.eof())
		return ;
	this->_contacts[this->_currentIndex].askLastName();
	if (std::cin.eof())
		return ;
	this->_contacts[this->_currentIndex].askNickname();
	if (std::cin.eof())
		return ;
	this->_contacts[this->_currentIndex].askPhoneNumber();
	if (std::cin.eof())
		return ;
	this->_contacts[this->_currentIndex].askDarkestSecret();
	if (this->_nbContacts < 8)
		this->_nbContacts++;	
	this->_currentIndex++;
	return ;
}

void	PhoneBook::_displayContact(int index) const
{
	std::cout << "First name: " << this->_contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " << this->_contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << this->_contacts[index].getNickname() << std::endl;
	std::cout << "Phone number: " << this->_contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darket secret: " << this->_contacts[index].getDarkestSecret() << std::endl;
}

void	PhoneBook::searchContact(void) const
{
	char		valid;
	std::string	index;

	if (this->_nbContacts == 0)
	{
		std::cout << "No contacts yet" << std::endl;
		return ;
	}
std::cout << std::setw(10) << "INDEX" << "|" << std::setw(10) << "FIRSTNAME" << "|" << std::setw(10) << "LASTNAME" << "|" << std::setw(10) << "NICKNAME" << std::endl;
	for (int i = 0; i < this->_nbContacts; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << (this->_contacts[i].getFirstName().length() > 10 ? this->_contacts[i].getFirstName().substr(0, 9) + "." : this->_contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << (this->_contacts[i].getLastName().length() > 10 ? this->_contacts[i].getLastName().substr(0, 9) + "." : this->_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << (this->_contacts[i].getNickname().length() > 10 ? this->_contacts[i].getNickname().substr(0, 9) + "." : this->_contacts[i].getNickname()) << std::endl;
	}
	valid = 0;
	do
	{
		std::cout << "Enter index of contact to display: ";
		std::getline(std::cin, index);
		if (!std::cin.eof())
		{
			if (index.length() != 1 || !std::isdigit(index[0]) || (index[0] - '0') < 0 || (index[0] - '0') >= this->_nbContacts)
				std::cerr << "Not a valid index" << std::endl;
			else
			{
				valid = 1;
				this->_displayContact((index[0] -'0'));
			}
		}
	}	while (!std::cin.eof() && !valid);
}
