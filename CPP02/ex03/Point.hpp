/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <bdetune@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:38:05 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/01 16:06:24 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"
# include <iostream>

class	Point
{

	public:

		Point(void);
		Point(float const x, float const y);
		Point(Fixed const x, Fixed const y);
		Point(Point const & src);
		~Point(void);

		Point &	operator=(Point const & rhs);
		Point	operator-(Point const & rhs) const;
		Fixed	operator*(Point const & rhs) const;

		Fixed	getX(void) const;
		Fixed	getY(void) const;

	private :

		Fixed const	x;
		Fixed const	y;
};

std::ostream &	operator<<(std::ostream & o, Point const & rhs);

#endif
