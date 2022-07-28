/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:56:04 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/28 11:42:45 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

int	main(void)
{
	Data		data1(42);
	Data		data2(1024);
	Data*		ret;
	uintptr_t	raw;

	std::cout << (deserialize(serialize(&data1)))->getValue() << std::endl;
	std::cout << "Address of pointer to data 2 before serialization: " << &data2 << std::endl;
	std::cout << "Value in data 2 before serialization: " << data2.getValue() << std::endl;
	raw = serialize(&data2);
	std::cout << "Value of uintptr_t raw after serialization: " << raw << std::endl;
	ret = deserialize(raw);
	std::cout << "Address of pointer return by deserialization: " << ret << std::endl;
	std::cout << "Value in class pointed by the pointer returned by deserialization: " << ret->getValue() << std::endl;
	return (0);
}
