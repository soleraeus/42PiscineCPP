/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:32:42 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/13 13:50:49 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const & name, int const signGrade, int const execGrade): _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (execGrade < 1 || signGrade < 1)
		throw Form::GradeTooHighException();
	else if (execGrade > 150 || signGrade > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(Form const & src): _name(src.getName()), _signed(src.getSigned()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
	return ;
}

Form::~Form(void)
{
	return ;
}

Form&	Form::operator=(Form const & rhs)
{
	this->_signed = rhs.getSigned();
	std::cerr << "Cannot change const variables name, signGrade and execGrade, only copying signing status" << std::endl;
	return (*this);
}

std::string const &	Form::getName(void) const
{
	return (this->_name);
}

int	Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

int	Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

void	Form::beSigned(Bureaucrat const & target)
{
	if (target.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();
	else
		this->act();
}

char const*	Form::GradeTooHighException::what(void) const throw()
{
	return ("Entered grade is too high, if you are trying to init a form nobody will be able to use it (thank you administration)");
}

char const*	Form::GradeTooLowException::what(void) const throw()
{
	return ("Entered grade is too low, if you are trying to init a form everyone will be able to use it since this grade is not in the scales (go ride your pony in fairytales), if you are trying to sign or execute a form go ask your boss");
}

char const*	Form::FormNotSignedException::what(void) const throw()
{
	return ("Cannot execute a form that has not been signed");
}

std::ostream&	operator<<(std::ostream& o, Form const & rhs)
{
	o << "Form " << rhs.getName() << ", status: " << (rhs.getSigned() == true ? "signed" : "not signed") << ", grade required to sign form: " << rhs.getSignGrade() << ", grade required to execute form: " << rhs.getExecGrade();
	return (o);
}
