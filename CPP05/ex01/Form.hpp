/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:21:59 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/27 11:56:51 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"
class	Bureaucrat;

class	Form
{
	public :
		Form(void);
		Form(std::string const & name, int const signGrade, int const execGrade);
		Form(Form const & src);
		~Form(void);

		Form &	operator=(Form const & rhs);

		std::string const &	getName(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;
		bool				getSigned(void) const;
		void				beSigned(Bureaucrat const & target);

		class	GradeTooLowException: public std::exception
		{
			virtual const char *	what() const throw();
		};

		class	GradeTooHighException: public std::exception
		{
			virtual const char *	what() const throw();
		};
	
	private :
		std::string const	_name;
		bool				_signed;
		int const			_signGrade;
		int const			_execGrade;
};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif
