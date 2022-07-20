/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:57:28 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/20 13:35:21 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int const	Fixed::_pointPosition = 8;

Fixed::Fixed(void): _rawBits(0)
{
	return ;
}

Fixed::Fixed(const int nb): _rawBits((1 << Fixed::_pointPosition)* nb)
{
	return ;
}

Fixed::Fixed(const float nb): _rawBits(roundf((1 << Fixed::_pointPosition)* nb))
{
	return ;
}

Fixed::Fixed(Fixed const & src): _rawBits(src.getRawBits())
{
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	this->setRawBits(rhs.getRawBits());
	return (*this);
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	Fixed	ret;

	ret.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (ret);
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	Fixed	ret;

	ret.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (ret);
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	return (Fixed (this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	return (Fixed (this->toFloat() / rhs.toFloat()));
}

Fixed &	Fixed::operator++()
{
	this->_rawBits += 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	ret;

	ret = *this;
	this->_rawBits += 1;
	return (ret);
}

Fixed &	Fixed::operator--()
{
	this->_rawBits -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	ret;

	ret = *this;
	this->_rawBits -= 1;
	return (ret);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_rawBits / (float)(1 << Fixed::_pointPosition));
}

int	Fixed::toInt(void) const
{
	return (this->_rawBits / (1 << Fixed::_pointPosition));
}

int	Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
	return ;
}

Fixed &	Fixed::min(Fixed & lhs, Fixed & rhs)
{
	if (lhs > rhs)
		return (rhs);
	return (lhs);
}

Fixed const &	Fixed::min(Fixed const & lhs, Fixed const & rhs)
{
	if (lhs > rhs)
		return (rhs);
	return (lhs);
}

Fixed &	Fixed::max(Fixed & lhs, Fixed & rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

Fixed const &	Fixed::max(Fixed const & lhs, Fixed const & rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}
