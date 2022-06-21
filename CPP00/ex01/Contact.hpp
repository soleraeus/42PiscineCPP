/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:04:02 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/21 15:39:31 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iostream>

class	Contact
{
	public:

		Contact(void);
		~Contact(void);

		void		askFirstName(void);
		void		askLastName(void);
		void		askNickname(void);
		void		askPhoneNumber(void);
		void		askDarkestSecret(void);
		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickname(void) const;
		std::string	getPhoneNumber(void) const;
		std::string	getDarkestSecret(void) const;

	private:

		const char	*_ws;
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
		
		std::string	_trimWhitespaces(std::string str);
};

#endif
