/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:48:38 by bdetune           #+#    #+#             */
/*   Updated: 2022/08/02 19:46:15 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void): _maxSize(0)
{
	return ;
}

Span::Span(unsigned int const size): _maxSize(size), _list()
{
	return ;
}

Span::Span(Span const & src): _maxSize(src._maxSize)
{
	try
	{
		this->_list = src._list;
	}
	catch (std::exception const & e)
	{
		std::cerr << "Error while copying list in copy constructor" << e.what() << std::endl;
	}
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
	try
	{
		this->_maxSize = rhs._maxSize;
		this->_list = rhs._list;
	}
	catch (std::exception const & e)
	{
		std::cerr << "Error while copying list in assignation operator: " << e.what() << std::endl;
	}
		return (*this);
}

void	Span::addNumber(int const nb)
{
	if (this->_list.size() == this->_maxSize)
	{
		std::string	what = "Span is already full";
		throw std::out_of_range(what);
	}
	try
	{
		this->_list.push_back(nb);
	}
	catch (std::exception const & e)
	{
		std::cerr << "Error while inserting new element" << e.what() << std::endl;
	}
	return ;
}

unsigned int	Span::shortestSpan(void)
{
	long long	ret;

	if (this->_list.size() <= 1)
	{
		std::string	what = "Span does not contain at least 2 elements";
		throw std::range_error(what);
	}
	this->_list.sort();
	try
	{
		std::list<long long>	tmp = this->_list;
		std::adjacent_difference(this->_list.begin(), this->_list.end(), tmp.begin());
		ret = *std::min_element(++(tmp.begin()), tmp.end());
	}
	catch (std::exception const & e)
	{
		(void) e;
		long long	difference;
		std::list<long long>::const_reverse_iterator	it = this->_list.rbegin();
		std::list<long long>::const_reverse_iterator	ite = --(this->_list.rend());

		ret = std::numeric_limits<unsigned int>::max();
		while (it != ite)
		{
			difference = *it - *(++it);
			if (difference < ret)
				ret = difference;
		}
	}
	return (ret);
}

unsigned int	Span::longestSpan(void) const
{
	std::list<long long>::const_iterator	min;
	std::list<long long>::const_iterator	max;

	if (this->_list.size() <= 1)
	{
		std::string	what = "Span does not contain at least 2 elements";
		throw std::range_error(what);
	}
	min = std::min_element(this->_list.begin(), this->_list.end());
	max = std::max_element(this->_list.begin(), this->_list.end());
	return (*max - *min);
}

void	Span::print(void) const
{
	if (this->_list.empty())
		return ;
	for (std::list<long long>::const_iterator i = this->_list.begin(); i != this->_list.end(); ++i)
		std::cout << *i << " ";
	std::cout << std::endl;
}
