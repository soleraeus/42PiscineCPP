/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*    Array.tpp                                          :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*    By: bdetune <marvin@42.fr>                     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*    Created: 2022/07/26 11:47:00 by bdetune           #+#    #+#            */
/*    Updated: 2022/07/26 11:47:30 by bdetune          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(void): _size(0), _array(NULL)
{
	return ;
}

template<typename T>
Array<T>::Array(unsigned int const n): _size(n)
{
	try
	{
		this->_array = new T[n];
		for (unsigned int i = 0; i < n; i++)
		{
			this->_array[i] = T();
		}
	}
	catch (std::bad_alloc const & e)
	{
		this->_array = NULL;
		this->_size = 0;
		std::cerr << "Error while attempting to create array: " << e.what() << std::endl;
	}
	return ;
}

template<typename T>
Array<T>::Array(Array<T> const & src): _size(src._size)
{
	try
	{
		this->_array = new T[this->_size];
		for (int i = 0; i < this->_size; i++)
		{
			this->_array[i] = src._array[i];
		}
	}
	catch (std::bad_alloc const & e)
	{
		this->_array = NULL;
		this->_size = 0;
		std::cerr << "Error while attempting to create array: " << e.what() << std::endl;
	}
	return ;
}

template<typename T>
Array<T>::~Array(void)
{
	if (this->_array)
		delete [] this->_array;
	return ;
}

template<typename T>
Array<T> &	Array<T>::operator=(Array<T> const & rhs)
{
	if (this == &rhs)
		return (*this);
	if (this->_array)
		delete [] this->_array;
	this->_size = rhs._size;
	try
	{
		this->_array = new T[this->_size];
		for (int i = 0; i < this->_size; i++)
		{
			this->_array[i] = rhs._array[i];
		}
	}
	catch (std::bad_alloc const & e)
	{
		this->_array = NULL;
		this->_size = 0;
		std::cerr << "Error while attempting to create array: " << e.what() << std::endl;
	}
	return (*this);
}

template<typename T>
T const &	Array<T>::operator[](long long index) const
{
	if (index >= this->_size || (index < 0 && -index > this->_size))
	{
		std::string	what = "Index out of range";
		throw std::out_of_range(what);
	}
	if (index < 0)
		return (this->_array[(this->_size + index)]);
	return (this->_array[index]);
}

template<typename T>
T &	Array<T>::operator[](long long index)
{
	if (index >= this->_size || (index < 0 && -index > this->_size))
	{
		std::string	what = "Index out of range";
		throw std::out_of_range(what);
	}
	if (index < 0)
		return (this->_array[(this->_size + index)]);
	return (this->_array[index]);
}

template<typename T>
unsigned int	Array<T>::size(void) const
{
	long long	ret;

	ret = this->_size;
	return (static_cast<unsigned int>(ret));
}
