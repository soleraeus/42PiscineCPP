/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:41:33 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/08 17:32:54 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class	Animal
{
	public :
		Animal(void);
		Animal(Animal const & src);
		virtual	~Animal(void);

		virtual Animal &	operator=(Animal const & rhs);

		std::string const &	getType(void) const;

		virtual void	makeSound(void) const;

	protected :
		std::string	type;
};

#endif
