/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:08:57 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/21 13:05:16 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void):_ws(" \t\n\r\v\f")
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string	Contact::trimWhitespaces(std::string str)
{
	size_t		start;
	size_t		end;
	std::string	trimmedStr;

	start
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
		valid = isempty(name);
	} while (!valid);
	this->_firstName = name;
	return ;
}

void	Contact::askLastName(void)
{
	std::getline(std::cin, this->_lastName);
	return ;
}
void	Contact::askNickname(void)
{
	std::getline(std::cin, this->_nickname);
	return ;
}
void	Contact::askPhoneNumber(void)
{
	std::getline(std::cin, this->_phoneNumber);
	return ;
}
void	Contact::askDarkestSecret(void)
{
	std::getline(std::cin, this->_darkestSecret);
	return ;
}

