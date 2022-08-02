/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:08:14 by bdetune           #+#    #+#             */
/*   Updated: 2022/08/02 17:31:49 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "shellColors.hpp"
#include "MutantStack.hpp"
#include "Fixed.hpp"

int main()
{
	MutantStack<int> mstack;

	//Test from subject
	std::cout << GREEN << "		TEST FROM SUBJECT MAIN		" << OFF << std::endl << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << YELLOW << "Stack top (should display 17)" << OFF << std::endl;
	std::cout << mstack.top() << std::endl << std::endl;
	mstack.pop();
	std::cout << YELLOW << "Stack size after two inserts and one pop (should display 1)" << OFF << std::endl;
	std::cout << mstack.size() << std::endl << std::endl;;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << YELLOW << "Content of stack using iterators from begin (Should display 5, 3, 5, 737, 0)" << OFF << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);

	//Same with std::list
	std::cout << GREEN << "		SAME TEST WITH LIST (SHOULD DISPLAY SAME RESULTS)		" << OFF << std::endl << std::endl;
	std::list<int>	l;
	l.push_back(5);
	l.push_back(17);
	std::cout << YELLOW << "List top (should display 17)" << OFF << std::endl;
	std::cout << l.back() << std::endl << std::endl;
	l.pop_back();
	std::cout << YELLOW << "List size after two inserts and one pop (should display 1)" << OFF << std::endl;
	std::cout << l.size() << std::endl << std::endl;;
	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	l.push_back(0);
	std::list<int>::iterator itl = l.begin();
	std::list<int>::iterator itel = l.end();
	++itl;
	--itl;
	std::cout << YELLOW << "Content of list using iterators from begin (Should display 5, 3, 5, 737, 0)" << OFF << std::endl;
	while (itl != itel)
	{
		std::cout << *itl << std::endl;
		++itl;
	}
	std::cout << std::endl;

	//Custom tests with other iterators
	std::cout << GREEN << "		CUSTOM TESTS		" << OFF << std::endl << std::endl;
	it = mstack.begin();
	ite = mstack.end();
	std::cout << YELLOW << "Same stack after incrementing by one every number using iterators" << OFF << std::endl;
	while (it != ite)
	{
		(*it) += 1;
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
	MutantStack<int>::const_iterator itc = mstack.begin();
	MutantStack<int>::const_iterator itec = mstack.end();
	std::cout << YELLOW << "Printing values with const_iterators on stack" << OFF << std::endl;
	while (itc != itec)
	{
		std::cout << *itc << std::endl;
		++itc;
	}
	std::cout << std::endl;
	/*
	itc = mstack.begin();
	itec = mstack.end();
	while (itc != itec)
	{
		(*itc) += 1;
		std::cout << *itc << std::endl;
		++itc;
	}*/
	MutantStack<int>::const_reverse_iterator ritc = mstack.rbegin();
	MutantStack<int>::const_reverse_iterator ritec = mstack.rend();
	std::cout << YELLOW << "Printing content of stack reversed with const_reverse_iterator" << OFF << std::endl;
	while (ritc != ritec)
	{
		std::cout << *ritc << std::endl;
		++ritc;
	}
	std::cout << std::endl;
	mstack.pop();
	std::cout << YELLOW << "Printing content of stack reversed with const_reverse_iterator after one pop" << OFF << std::endl;
	ritc = mstack.rbegin();
	ritec = mstack.rend();
	while (ritc != ritec)
	{
		std::cout << *ritc << std::endl;
		++ritc;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "Testing assignation operator" << std::endl;
	MutantStack<int>	*copy = new MutantStack<int>();
	*copy = mstack;
	it = copy->begin();
	ite = copy->end();
	std::cout << "Values in copied mutant stack with iterators" << OFF << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		*it +=1;
		++it;
	}
	std::cout << std::endl;
	copy->push(2563);
	copy->push(42);
	it = copy->begin();
	ite = copy->end();
	std::cout << YELLOW << "Values in copied mutant stack with iterators after incrementing values and adding two elements (2563 and 42)" << OFF << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "Values in original mutant stack" << OFF << std::endl;
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		*it +=1;
		++it;
	}
	delete copy;
	
	//Stack of Fixed class objects
	std::cout << std::endl << YELLOW << "Testing with stack of Fixed class Objects" << std::endl;
	MutantStack<Fixed>	fixedStack;
	
	fixedStack.push(Fixed(42));
	fixedStack.push(Fixed(1.25f));
	fixedStack.push(Fixed(42.42f));
	fixedStack.push(Fixed(-55.55f));
	std::cout << std::endl << "Displaying size (should be 4)" << OFF << std::endl;
	std::cout << fixedStack.size() << std::endl;
	MutantStack<Fixed>::const_iterator	itfc = fixedStack.begin();
	MutantStack<Fixed>::const_iterator	itefc = fixedStack.end();
	std::cout << std::endl << YELLOW << "Displaying elements with const_iterators (should be roughly 42, 1.25, 42.42, -55.55)" << OFF << std::endl;
	while (itfc != itefc)
	{
		std::cout << *itfc << std::endl;
		++itfc;
	}
	return 0;
}
