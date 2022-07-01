/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 13:12:52 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/01 13:52:17 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): x(Fixed(0)), y(Fixed(0))
{
	return ;
}

Point::Point(float const x, float const y): x(Fixed(x)), y(Fixed(y))
{
	return ;
}


Point::Point(Fixed const x, Fixed const y): x(x), y(y)
{
	return ;
}

Point::Point(Point const & src): x(Fixed(src.getX())), y(Fixed(src.getY()))
{
	return ;
}

Point::~Point(void)
{
	return ;
}

Point &	Point::operator=(Point const & rhs)
{
	(void)rhs;
	std::cerr << "Cannot modify constant attributes in class Point" << std::endl;
	return (*this);
}

Point	Point::operator-(Point const & rhs) const
{
	Fixed	x(this->getX() - rhs.getX());
	Fixed	y(this->getY() - rhs.getY());

	std::cerr << "in func " << x << ";" << y << std::endl; 
	return (Point(x, y));
}

Fixed	Point::getX(void) const
{
	return (this->x);
}

Fixed	Point::getY(void) const
{
	return (this->y);
}

std::ostream &	operator<<(std::ostream & o, Point const & rhs)
{
	o << rhs.getX() << " ; " << rhs.getY();
	return (o);
}
