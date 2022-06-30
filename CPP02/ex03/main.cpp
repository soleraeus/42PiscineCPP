/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:33:07 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/30 18:02:27 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f)*Fixed(2));
	
	std::cout<<a<<std::endl;
	std::cout<<++a<<std::endl;
	std::cout<<a<<std::endl;
	std::cout<<a++<<std::endl;
	std::cout<<a<<std::endl;
	std::cout<<b<<std::endl;
	std::cout<<Fixed::max(a,b)<<std::endl;
	return (0);
}
