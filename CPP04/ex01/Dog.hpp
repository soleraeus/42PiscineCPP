/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:31:05 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/08 18:38:26 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class	Dog: public Animal
{
	public :
		Dog(void);
		Dog(Dog const & src);
		virtual	~Dog(void);

		virtual Dog &	operator=(Dog const & rhs);

		virtual void	makeSound(void) const;
		virtual bool			addIdea(std::string const & idea);
		virtual std::string		*getIdeas(void) const;
		virtual std::string		*removeIdea(void);
		virtual int				getNbIdeas(void) const;

	private :
		Brain	*brain;
};

#endif
