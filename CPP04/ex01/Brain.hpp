/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:41:05 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/08 18:20:35 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>

class	Brain
{
	public :
		Brain(void);
		Brain(Brain const & src);
		virtual ~Brain(void);

		virtual Brain & operator=(Brain const & rhs);

		bool	addIdea(std::string const & idea);
		std::string *getIdeas(void) const;
		std::string *removeIdea(void);
		int		getNbIdeas(void) const;

	private :
		std::string	ideas[100];
		int			_nbIdeas;
};

#endif
