/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:35:43 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/22 14:51:39 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>
#include <cstdlib>

class PhoneBook
{
	public:

		PhoneBook(void);
		~PhoneBook(void);
		
		void	addContact(void);
		void	searchContact(void) const;
	
	private:

		int		_currentIndex;
		int		_nbContacts;
		Contact	_contacts[8];

		void	_displayContact(int index) const;

};

#endif
