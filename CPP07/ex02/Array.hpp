/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:33:09 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/26 12:23:28 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <stdexcept>
# include <string>

template<typename T>
class	Array
{
	public:
		Array<T>(void);
		Array<T>(unsigned int const n);
		Array<T>(Array<T> const & src);
		~Array<T>(void);

		Array<T> &		operator=(Array<T> const & rhs);
		T const &		operator[](long long index) const;
		T &				operator[](long long index);
		unsigned int	size(void) const;
		
	private:
		long long	_size;
		T*			_array;
};

# include "Array.tpp"
#endif
