/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <bdetune@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:49:46 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/13 15:07:06 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const & name, int grade): _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src): _name(src.getName()), _grade(src.getGrade())
{
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->_grade = rhs.getGrade();
	std::cerr << "Cannot assign new name to bureaucrat " << this->_name << " changing only grade" << std::endl;
	return (*this);
}

std::string const &	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int const &	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::promote(void)
{
	if (this->getGrade() == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
}

void Bureaucrat::demote(void)
{
	if (this->getGrade() == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}

void	Bureaucrat::signForm(Form& target)
{
	try
	{
		target.beSigned(*this);
		std::cout << *this << " signed form " << target.getName() << std::endl;
	}
	catch (Form::GradeTooLowException const & e)
	{
		std::cout << *this << " couldn't sign form " << target.getName() << " because his grade is too low. Form requires grade " << target.getSignGrade() << " to be signed." << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << *this << " executed " << form.getName() << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cerr << "Error while executing " << form << " by " << *this << " - " << e.what() << std::endl;
	}
}

const char*	Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Cannot set grade below 1, this Bureaucrat is already on top of the food chain");
}

const char*	Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Cannot set grade above 150, this Bureaucrat is already a piece of trash");
}

std::ostream&	operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}
