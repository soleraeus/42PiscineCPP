/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:09:36 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/13 16:00:18 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include <iostream>
# include <locale>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern;

typedef Form*	(Intern::*func)(std::string const &);

class	Intern
{
	public:
		Intern(void);
		Intern(Intern const & src);
		~Intern(void);

		Intern &	operator=(Intern const & rhs);

		Form *		makeForm(std::string const & name, std::string const & target);
	
	private :
		Form*		_makeRobotomyRequestForm(std::string const & target);
		Form*		_makeShrubberyCreationForm(std::string const & target);
		Form*		_makePresidentialPardonForm(std::string const & target);
		std::string	_forms[3];
		func		_funcPtr[3];
};

#endif
