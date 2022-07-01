/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:33:07 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/01 16:56:13 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	//Point on edge
	if (bsp(Point(0, 0), Point(1, 1), Point(1, 0), Point(0.5, 0.5)))
		std::cout << "Point " << Point(0.5, 0.5) << " is in triangle with edges A: " << Point(0, 0) << ", B: " << Point(1, 1) << ", C: " << Point(1, 0) << std::endl;
	else
		std::cout << "Point " << Point(0.5, 0.5) << " is NOT in triangle with edges A: " << Point(0, 0) << ", B: " << Point(1, 1) << ", C: " << Point(1, 0) << std::endl;

	//Point in triangle
	if (bsp(Point(0, 0), Point(1, 1), Point(1, 0), Point(0.5, 0.25)))
		std::cout << "Point " << Point(0.5, 0.25) << " is in triangle with edges A: " << Point(0, 0) << ", B: " << Point(1, 1) << ", C: " << Point(1, 0) << std::endl;
	else
		std::cout << "Point " << Point(0.5, 0.25) << " is NOT in triangle with edges A: " << Point(0, 0) << ", B: " << Point(1, 1) << ", C: " << Point(1, 0) << std::endl;

	//Point too far
	if (bsp(Point(0, 0), Point(1, 1), Point(1, 0), Point(1.25, 0.5)))
		std::cout << "Point " << Point(1.25, 0.5) << " is in triangle with edges A: " << Point(0, 0) << ", B: " << Point(1, 1) << ", C: " << Point(1, 0) << std::endl;
	else
		std::cout << "Point " << Point(1.25, 0.5) << " is NOT in triangle with edges A: " << Point(0, 0) << ", B: " << Point(1, 1) << ", C: " << Point(1, 0) << std::endl;

	//Point on one of the summits
	if (bsp(Point(0, 0), Point(1, 1), Point(1, 0), Point(1, 1)))
		std::cout << "Point " << Point(1, 1) << " is in triangle with edges A: " << Point(0, 0) << ", B: " << Point(1, 1) << ", C: " << Point(1, 0) << std::endl;
	else
		std::cout << "Point " << Point(1, 1) << " is NOT in triangle with edges A: " << Point(0, 0) << ", B: " << Point(1, 1) << ", C: " << Point(1, 0) << std::endl;

	//Point behind
	if (bsp(Point(0, 0), Point(1, 1), Point(1, 0), Point(-0.5, 0.5)))
		std::cout << "Point " << Point(-0.5, 0.5) << " is in triangle with edges A: " << Point(0, 0) << ", B: " << Point(1, 1) << ", C: " << Point(1, 0) << std::endl;
	else
		std::cout << "Point " << Point(-0.5, 0.5) << " is NOT in triangle with edges A: " << Point(0, 0) << ", B: " << Point(1, 1) << ", C: " << Point(1, 0) << std::endl;

	//Flat triangle
	if (bsp(Point(0, 0), Point(0, 0), Point(1, 0), Point(0.5, 0)))
		std::cout << "Point " << Point(0.5, 0) << " is in triangle with edges A: " << Point(0, 0) << ", B: " << Point(1, 1) << ", C: " << Point(1, 0) << std::endl;
	else
		std::cout << "Point " << Point(0.5, 0) << " is NOT in triangle with edges A: " << Point(0, 0) << ", B: " << Point(1, 1) << ", C: " << Point(1, 0) << std::endl;

	//Borderline but in
	if (bsp(Point(0, 0), Point(1, 1), Point(1, 0), Point(0.99, 0.5)))
		std::cout << "Point " << Point(0.99, 0.5) << " is in triangle with edges A: " << Point(0, 0) << ", B: " << Point(1, 1) << ", C: " << Point(1, 0) << std::endl;
	else
		std::cout << "Point " << Point(0.99, 0.5) << " is NOT in triangle with edges A: " << Point(0, 0) << ", B: " << Point(1, 1) << ", C: " << Point(1, 0) << std::endl;

	return (0);
}
