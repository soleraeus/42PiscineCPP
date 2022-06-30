/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:50:16 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/30 17:59:32 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class	Fixed
{
	
	public :

		Fixed(void);
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed &	operator=(Fixed const & rhs);
		bool	operator>(Fixed const & rhs) const;
		bool	operator>=(Fixed const & rhs) const;
		bool	operator<(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs) const;
		bool	operator==(Fixed const & rhs) const;
		bool	operator!=(Fixed const & rhs) const;
		Fixed	operator+(Fixed const & rhs) const;
		Fixed	operator-(Fixed const & rhs) const;
		Fixed	operator*(Fixed const & rhs) const;
		Fixed	operator/(Fixed const & rhs) const;
		Fixed &	operator++();
		Fixed	operator++(int);
		Fixed &	operator--();
		Fixed	operator--(int);
		
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		static Fixed &	min(Fixed & lhs, Fixed & rhs);
		static Fixed const &	min(Fixed const & lhs, Fixed const & rhs);
		static Fixed &	max(Fixed & lhs, Fixed & rhs);
		static Fixed const &	max(Fixed const & lhs, Fixed const & rhs);

	private :

		static int const	_pointPosition;

		int					_rawBits;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif
