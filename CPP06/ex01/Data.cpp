/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:52:49 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/19 12:55:50 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void): _value(0)
{
	return ;
}

Data::Data(int value): _value(value)
{
	return ;
}

Data::Data(Data const & src): _value(src._value)
{
	return ;
}

Data::~Data(void)
{
	return ;
}

Data &	Data::operator=(Data const & rhs)
{
	this->_value = rhs._value;
	return (*this);
}

int	Data::getValue(void)
{
	return (this->_value);
}
