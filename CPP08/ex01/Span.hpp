/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:42:51 by bdetune           #+#    #+#             */
/*   Updated: 2022/08/02 19:32:07 by bdetune          ###   ########.fr       */
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
			if ((std::distance(begin, end) + this->_list.size()) > this->_maxSize)
			{
				std::string	what = "Adding range of iterators would go over the span limits";
				throw std::out_of_range(what);
			}
			try
			{
				this->_list.insert(this->_list.end(), begin, end);
			}
			catch (std::exception const & e)
			{
				std::cerr << "Could not add range to Span: " << e.what() << std::endl;
			}
		}
		void			print(void) const;
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void) const;

	private:
		unsigned int			_maxSize;
		std::list<long long>	_list;
};

#endif
