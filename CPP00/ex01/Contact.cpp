/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:08:57 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/21 15:40:28 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void): _ws(" \t\n\r\v\f")
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string	Contact::_trimWhitespaces(std::string str)
{
	size_t		start;
	size_t		end;
	std::string	trimmedStr;

	start = str.find_first_not_of(this->_ws);
	end = str.find_last_not_of(this->_ws);
	if (end != std::string::npos)
		trimmedStr = str.substr(start, (end - start + 1));
	else
		trimmedStr = "";
	return (trimmedStr);
}

void	Contact::askFirstName(void)
{
	char		valid;
	std::string	name;

	valid = 0;
	do
	{
		std::cout << "Enter first name: ";
		std::getline(std::cin, name);
		if (std::cin.eof())
			return ;
		name = this->_trimWhitespaces(name);
		if (name.empty())
			std::cerr << "First name cannot be empty" << std::endl;
		else
			valid = 1;
	} while (!valid);
	this->_firstName = name;
	return ;
}

void	Contact::askLastName(void)
{
	char		valid;
	std::string	name;

	valid = 0;
	do
	{
		std::cout << "Enter last name: ";
		std::getline(std::cin, name);
		if (std::cin.eof())
			return ;
		name = this->_trimWhitespaces(name);
		if (name.empty())
			std::cerr << "Last name cannot be empty" << std::endl;
		else
			valid = 1;
	} while (!valid);
	this->_lastName = name;
	return ;
}
void	Contact::askNickname(void)
{
	char		valid;
	std::string	name;

	valid = 0;
	do
	{
		std::cout << "Enter nickname: ";
		std::getline(std::cin, name);
		if (std::cin.eof())
			return ;
		name = this->_trimWhitespaces(name);
		if (name.empty())
			std::cerr << "Nickname cannot be empty" << std::endl;
		else
			valid = 1;
	} while (!valid);
	this->_nickname = name;
	return ;
}
void	Contact::askPhoneNumber(void)
{
	char		valid;
	std::string	phoneNumber;

	valid = 0;
	do
	{
		std::cout << "Enter phone number: ";
		std::getline(std::cin, phoneNumber);
		if (std::cin.eof())
			return ;
		phoneNumber = this->_trimWhitespaces(phoneNumber);
		if (phoneNumber.empty())
			std::cerr << "Phone number cannot be empty" << std::endl;
		else
			valid = 1;
	} while (!valid);
	this->_phoneNumber = phoneNumber;
	return ;
}
void	Contact::askDarkestSecret(void)
{
	char		valid;
	std::string	darkestSecret;

	valid = 0;
	do
	{
		std::cout << "Enter darkest secret: ";
		std::getline(std::cin, darkestSecret);
		if (std::cin.eof())
			return ;
		darkestSecret = this->_trimWhitespaces(darkestSecret);
		if (darkestSecret.empty())
			std::cerr << "Darkest secret cannot be empty" << std::endl;
		else
			valid = 1;
	} while (!valid);
	this->_darkestSecret = darkestSecret;
	return ;
}

std::string	Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::getNickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}
