/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:48:17 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/19 13:03:02 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

class	Data
{
	public :
		Data(void);
		Data(int value);
		Data(Data const & src);
		~Data(void);

		Data &	operator=(Data const & rhs);
	
		int	getValue(void);

	private :
		int	_value;
};

#endif
