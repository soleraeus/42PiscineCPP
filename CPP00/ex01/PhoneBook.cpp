/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:40:54 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/17 19:23:04 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void):_nbContacts(0), _currentIndex(0)
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
	std::cout << "Enter first name: ";
	this->_contacts[this->_currentIndex].askFirstName();
	std::cout << "Enter last name: ";
	this->_contacts[this->_currentIndex].askLastName();
	std::cout << "Enter nickname name: ";
	this->_contacts[this->_currentIndex].askNickname();
	std::cout << "Enter phone number: ";
	this->_contacts[this->_currentIndex].askPhoneNumber();
	std::cout << "Enter darkest secret: ";
	this->_contacts[this->_currentIndex].askDarkestSecret();
	if (this->_nbContacts < 8)
		this->_nbContacts++;	
	this->_currentIndex++;
	return ;
}
