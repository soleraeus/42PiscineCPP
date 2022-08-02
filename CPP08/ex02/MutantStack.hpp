/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:36:57 by bdetune           #+#    #+#             */
/*   Updated: 2022/08/02 17:44:57 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <deque>

template<typename T>
class MutantStack: public std::stack<T>
{

	public :
		typedef typename std::deque<T>::iterator				iterator;
		typedef typename std::deque<T>::const_iterator			const_iterator;
		typedef typename std::deque<T>::reverse_iterator		reverse_iterator;
		typedef typename std::deque<T>::const_reverse_iterator	const_reverse_iterator;

		MutantStack<T>(void): std::stack<T>() {}
		MutantStack<T>(T const & x): std::stack<T>(x) {}
		MutantStack<T>(typename std::stack<T> const & src): std::stack<T>(src) {}
		~MutantStack<T>(void) {}

		MutantStack<T> &	operator=(typename std::stack<T> const & rhs)
		{
			if (this != &rhs)
				this->c = rhs.c;
			return (*this);
		}

		MutantStack<T>::iterator	begin(void){
			return (this->c.begin());
		}
		MutantStack<T>::iterator	end(void){
			return (this->c.end());
		}
		MutantStack<T>::reverse_iterator	rbegin(void){
			return (this->c.rbegin());
		}
		MutantStack<T>::reverse_iterator	rend(void){
			return (this->c.rend());
		}
};

#endif
