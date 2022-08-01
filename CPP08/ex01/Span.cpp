/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:48:38 by bdetune           #+#    #+#             */
/*   Updated: 2022/08/01 19:09:00 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void): _maxSize(0), _currentSize(0)
{
	return ;
}

Span::Span(unsigned int const size): _maxSize(size), _currentSize(0)
{
	return ;
}

Span::Span(Span const & src): _maxSize(src._maxSize), _currentSize(src._currentSize), _list(src._list)
{
	return ;
}

Span::~Span(void)
{
	return ;
}

Span &	Span::operator=(Span const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_maxSize = rhs._maxSize;
	this->_currentSize = rhs._currentSize;
	this->_list = rhs._list;
	return (*this);
}

void	Span::addNumber(int const nb)
{
	if (this->_currentSize == this->_maxSize)
	{
		std::string	what = "Span is already full";
		throw std::out_of_range(what);
	}
	try
	{
		this->_list.push_back(nb);
		this->_currentSize += 1;
	}
	catch (std::exception const & e)
	{
		std::cerr << "Error while inserting new element" << e.what() << std::endl;
	}
	return ;
}

unsigned int	Span::shortestSpan(void)
{
	if (this->_currentSize <= 1)
	{
		std::string	what = "Span does not contain at least 2 elements";
		throw std::range_error(what);
	}
	this->_list.sort();
	std::list<long long>	tmp = this->_list;
	std::adjacent_difference(this->_list.begin(), this->_list.end(), tmp.begin());
	return (*std::min_element(++(tmp.begin()), tmp.end()));
}

unsigned int	Span::longestSpan(void) const
{
	std::list<long long>::const_iterator	min;
	std::list<long long>::const_iterator	max;

	if (this->_currentSize <= 1)
	{
		std::string	what = "Span does not contain at least 2 elements";
		throw std::range_error(what);
	}
	min = std::min_element(this->_list.begin(), this->_list.end());
	max = std::max_element(this->_list.begin(), this->_list.end());
	return (*max - *min);
}

void	Span::printList(void) const
{
	for (std::list<long long>::const_iterator i = this->_list.begin(); i != this->_list.end(); ++i)
		std::cout << *i << " ";
	std::cout << std::endl;
}
