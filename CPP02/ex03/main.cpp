/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:33:07 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/01 13:50:07 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point	a(0.25, 2);
	Point	b(3, 0);
	Point	c(1.25f, 1.25f);
	Point	point(1.25f, 1.25f);

	if (bsp(a, b, c, point) == true)
		std::cout << "Point is in triangle" << std::endl;
	else
		std::cout << "Point is not in triangle" << std::endl;
	return (0);
}
