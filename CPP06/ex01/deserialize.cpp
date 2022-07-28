/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:42:04 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/28 11:43:48 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "Data.hpp"

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
