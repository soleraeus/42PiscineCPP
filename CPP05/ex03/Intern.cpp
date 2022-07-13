/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:20:56 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/13 16:07:25 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	this->_funcPtr[0] = &Intern::_makeRobotomyRequestForm;
	this->_funcPtr[1] = &Intern::_makeShrubberyCreationForm;
	this->_funcPtr[2] = &Intern::_makePresidentialPardonForm;
	this->_forms[0] = std::string("robotomy request");
	this->_forms[1] = std::string("shrubbery creation");
	this->_forms[2] = std::string("presidential pardon");
	return ;
}

Intern::Intern(Intern const & src)
{
	this->_funcPtr[0] = &Intern::_makeRobotomyRequestForm;
	this->_funcPtr[1] = &Intern::_makeShrubberyCreationForm;
	this->_funcPtr[2] = &Intern::_makePresidentialPardonForm;
	this->_forms[0] = std::string("robotomy request");
	this->_forms[1] = std::string("shrubbery creation");
	this->_forms[2] = std::string("presidential pardon");

	(void)src;
	return ;
}

Intern::~Intern(void)
{
	return ;
}

Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}

Form*	Intern::makeForm(std::string const & name, std::string const & target)
{
	std::string ret = "";
	std::locale	loc;
	int			i = 0;

	for (std::string::size_type j = 0; j < name.length(); j++)
	{
		ret += std::tolower(name[j], loc);
	}
	while (i < 3)
	{
		if (ret == this->_forms[i])
		{
			std::cout << "Intern creates " << ret << std::endl;
			return ((this->*(_funcPtr[i]))(target));
		}
		i++;
	}
	std::cerr << "Intern could not create form " << name << ". It might not exist but how can he tell the boss?" << std::endl;
	return (NULL);
}

Form*	Intern::_makeRobotomyRequestForm(std::string const & target)
{
	Form*	ret;

	try
	{
		ret = new RobotomyRequestForm(target);
	}
	catch (std::exception const & e)
	{
		std::cerr << "Error while Intern was creating form: " << e.what() << std::endl;
		ret = NULL;
	}
	return (ret);
}

Form*	Intern::_makeShrubberyCreationForm(std::string const & target)
{
	Form*	ret;

	try
	{
		ret = new ShrubberyCreationForm(target);
	}
	catch (std::exception const & e)
	{
		std::cerr << "Error while Intern was creating form: " << e.what() << std::endl;
		ret = NULL;
	}
	return (ret);
}

Form* Intern::_makePresidentialPardonForm(std::string const & target)
{
	Form*	ret;

	try
	{
		ret = new PresidentialPardonForm(target);
	}
	catch (std::exception const & e)
	{
		std::cerr << "Error while Intern was creating form: " << e.what() << std::endl;
		ret = NULL;
	}
	return (ret);
}
