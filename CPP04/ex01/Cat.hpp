/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:31:05 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/08 17:50:05 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class	Cat: public Animal
{
	public :
		Cat(void);
		Cat(Cat const & src);
		virtual	~Cat(void);

		virtual Cat &	operator=(Cat const & rhs);

		virtual void	makeSound(void) const;

	private :
		Brain	*brain;
};

#endif
