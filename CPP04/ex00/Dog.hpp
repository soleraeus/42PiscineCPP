/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:31:05 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/08 17:17:43 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include <iostream>

class	Dog: public Animal
{
	public :
		Dog(void);
		Dog(Dog const & src);
		virtual	~Dog(void);

		virtual Dog &	operator=(Dog const & rhs);

		virtual void	makeSound(void) const;
};

#endif
