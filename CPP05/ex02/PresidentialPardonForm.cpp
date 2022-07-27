/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:25:36 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/27 16:10:06 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form(std::string("Presidential Pardon"), 25, 5)
{
	this->_target = std::string("Anonymous");
	return ;
}


PresidentialPardonForm::PresidentialPardonForm(std::string const & target): Form(std::string("Presidential Pardon"), 25, 5)
{
	this->_target = target;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src): Form(std::string("Presidential Pardon"), 25, 5)
{
	if (src.getSigned())
	{
		this->beSigned(Bureaucrat(std::string("Placeholder"), 1));
	}
	this->_target = src._target;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	if (this == &rhs)
		return (*this);
	if (rhs.getSigned())
	{
		this->beSigned(Bureaucrat(std::string("Placeholder"), 1));
	}
	this->_target = rhs._target;
	return (*this);
}

void	PresidentialPardonForm::act(void) const
{
	std::cout << this->_target << " has been pardoned by our magnanimous president of the universe Zaphod Beeblerox" << std::endl;
}
