/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:21:59 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/27 16:15:06 by bdetune          ###   ########.fr       */
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
		virtual	~Form(void);

		virtual	Form &	operator=(Form const & rhs);

		std::string const &	getName(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;
		bool				getSigned(void) const;
		void				beSigned(Bureaucrat const & target);
		void				execute(Bureaucrat const & executor) const;

		class	GradeTooLowException: public std::exception
		{
			virtual const char *	what() const throw();
		};

		class	GradeTooHighException: public std::exception
		{
			virtual const char *	what() const throw();
		};

		class	FormNotSignedException: public std::exception
		{
			virtual const char *	what() const throw();
		};

	protected :
		virtual void		act() const = 0;

	
	private :
		std::string const	_name;
		bool				_signed;
		int const			_signGrade;
		int const			_execGrade;
};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif
