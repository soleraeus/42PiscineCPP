/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:36:57 by bdetune           #+#    #+#             */
/*   Updated: 2022/08/02 13:01:18 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <list>
# include <deque>

template<typename T>
class MutantStack: public std::stack<T>
{

	public :
		typedef typename std::deque<T>::iterator	iterator;
		MutantStack<T>(void): std::stack<T>()
		{
			return ;
		}
	MutantStack<T>::iterator	begin(void){
		MutantStack<T>::iterator	st(this->c.begin());
		return (st);
	}
	MutantStack<T>::iterator	end(void){
		MutantStack<T>::iterator	en(this->c.end());
		return (en);
	}
};

#endif
