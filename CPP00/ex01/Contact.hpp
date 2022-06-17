/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:04:02 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/17 19:16:55 by bdetune          ###   ########.fr       */
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

		void	askFirstName(void);
		void	askLastName(void);
		void	askNickname(void);
		void	askPhoneNumber(void);
		void	askDarkestSecret(void);

	private:

		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

};

#endif
