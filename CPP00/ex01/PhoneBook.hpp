/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:35:43 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/21 15:47:35 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>
# include <iomanip>

class PhoneBook
{
	public:

		PhoneBook(void);
		~PhoneBook(void);
		
		void	addContact(void);
		void	searchContact(void);
	
	private:

		int		_currentIndex;
		int		_nbContacts;
		Contact	_contacts[8];

		void	_displayContact(int index) const;

};

#endif
