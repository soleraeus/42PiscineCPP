/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:08:57 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/17 19:22:28 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::askFirstName(void)
{
	std::getline(std::cin, this->_firstName);
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

