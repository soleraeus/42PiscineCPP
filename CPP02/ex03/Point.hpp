/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <bdetune@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:38:05 by bdetune           #+#    #+#             */
/*   Updated: 2022/06/30 18:42:36 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class	Point
{

	public:

		Point(void);
		Point(float const x, float const y);
		Point(Point const & Point);
		~Point(void);

		Fixed &	operator=(Fixed const & rhs);

	private :

		Fixed const	x;
		Fixed const	y;
}

#endif
