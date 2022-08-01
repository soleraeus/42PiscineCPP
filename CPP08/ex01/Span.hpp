/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:42:51 by bdetune           #+#    #+#             */
/*   Updated: 2022/08/01 19:06:11 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iterator>
# include <limits>
# include <list>
# include <stdexcept>
# include <algorithm>
# include <numeric>
# include <iostream>

class	Span
{
	public:
		Span(void);
		Span(unsigned int const size);
		Span(Span const & src);
		~Span(void);

		Span &			operator=(Span const & rhs);
		void			addNumber(int const nb);
		template<class InputIterator>
		void			addRange(InputIterator begin, InputIterator end)
		{
			if ((std::distance(begin, end) + this->_currentSize) > this->_maxSize)
			{
				std::string	what = "Adding range of iterators would go over the span limits";
				throw std::out_of_range(what);
			}
			this->_list.insert(this->_list.end(), begin, end);
		}
		void			printList(void) const;
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void) const;

	private:
		unsigned int			_maxSize;
		unsigned int			_currentSize;
		std::list<long long>	_list;
};

#endif
