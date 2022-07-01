/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <bdetune@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:37:22 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/01 16:13:55 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point	r(point - a);
	Point	s(c - b);
	Fixed	denom(r*s);

	std::cerr << "R calculated " << r << std::endl;
	std::cerr << "S calculated " << s << std::endl;
	std::cerr << "denom calculated " << denom << std::endl;
	std::cerr << "A :" << a.getX() << ";" << a.getY() << std::endl;
	std::cerr << "B :" << b.getX() << ";" << b.getY() << std::endl;
	std::cerr << "C :" << c.getX() << ";" << c.getY() << std::endl;
	std::cerr << "point :" << point.getX() << ";" << point.getY() << std::endl;
	std::cerr << "point :" << point.getX() << ";" << point.getY() << std::endl;
	if ((point.getX() == a.getX() && point.getY() == a.getY())
		|| (point.getX() == b.getX() && point.getY() == b.getY())
		|| (point.getX() == c.getX() && point.getY() == c.getY())
		|| denom.toFloat() == 0)
		return (false);
	return (true);
}
