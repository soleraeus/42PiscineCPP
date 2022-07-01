/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <bdetune@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:37:22 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/01 13:49:28 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point	r(point - a);

	std::cerr << "R calculated " << r << std::endl;
	std::cerr << "A :" << a.getX() << ";" << a.getY() << std::endl;
	std::cerr << "B :" << b.getX() << ";" << b.getY() << std::endl;
	std::cerr << "C :" << c.getX() << ";" << c.getY() << std::endl;
	std::cerr << "point :" << point.getX() << ";" << point.getY() << std::endl;
	std::cerr << "point :" << point.getX() << ";" << point.getY() << std::endl;
	if ((point.getX() == a.getX() && point.getY() == a.getY())
		|| (point.getX() == b.getX() && point.getY() == b.getY())
		|| (point.getX() == c.getX() && point.getY() == c.getY()))
		return (false);
	return (true);
}
