/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:35:43 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/17 19:07:38 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
	public:

		PhoneBook(void);
		~PhoneBook(void);
		
		void	addContact(void);
	
	private:

		int		_currentIndex;
		int		_nbContacts;
		Contact	_contacts[8];

};

#endif
