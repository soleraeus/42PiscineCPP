/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:57:28 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/29 17:35:26 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int const	Fixed::_pointPosition = 8;

Fixed::Fixed(void): _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int nb): _rawBits(nb << Fixed::_pointPosition)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float nb): _rawBits(roundf((1 << Fixed::_pointPosition)* nb))
{
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src): _rawBits(src.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
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
	Fixed	ret;

	ret.setRawBits(this->getRawBits() * rhs.getRawBits());
	return (ret);
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	Fixed	ret;

	ret.setRawBits(this->getRawBits() / rhs.getRawBits());
	return (ret);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_rawBits / (float)(1 << Fixed::_pointPosition));
}

int	Fixed::toInt(void) const
{
	return (this->_rawBits >> Fixed::_pointPosition);
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

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}
