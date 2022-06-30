/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <bdetune@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:42:45 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/30 18:46:04 by bdetune          ###   ########.fr       */
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
