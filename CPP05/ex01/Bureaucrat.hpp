/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <bdetune@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:38:43 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/12 11:55:40 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>
# include "Form.hpp"
class	Form;

class	Bureaucrat
{
	public :
		Bureaucrat(std::string const & name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);

		Bureaucrat&	operator=(Bureaucrat const & rhs);

		std::string const &	getName(void) const;
		int const &			getGrade(void) const;
		void				promote(void);
		void				demote(void);
		void				signForm(Form& target);
	
		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char*	what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char*	what() const throw();
		};

	private :
		std::string const	_name;
		int					_grade;
};

std::ostream&	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
