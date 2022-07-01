/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:33:07 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/01 16:12:40 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point	a(0, 0);
	Point	b(1, 1);
	Point	c(1, 0);
	Point	point(0, -1);

	if (bsp(a, b, c, point) == true)
		std::cout << "Point is in triangle" << std::endl;
	else
		std::cout << "Point is not in triangle" << std::endl;
	return (0);
}
