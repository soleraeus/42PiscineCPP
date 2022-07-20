/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <bdetune@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:37:22 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/20 13:47:45 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point	r(point - a);
	Point	s(c - b);
	Fixed	denom(r*s);
	Fixed	u;
	Fixed	t;

	if ((point.getX() == a.getX() && point.getY() == a.getY())
		|| denom.getRawBits() == 0)
		return (false);
	u = ((b - a)*r) / denom;
	t = ((b - a)*s) / denom;
	if (t > Fixed(1) && u > Fixed(0) && u < Fixed(1))
		return (true);
	return (false);
}
