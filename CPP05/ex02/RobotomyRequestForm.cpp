/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:25:36 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/27 16:14:30 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form(std::string("Robotomy Request"), 72, 45)
{
	this->_target = std::string("Anonymous");
	srand(time(0));
	return ;
}


RobotomyRequestForm::RobotomyRequestForm(std::string const & target): Form(std::string("Robotomy Request"), 72, 45)
{
	this->_target = target;
	srand(time(0));
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src): Form(std::string("RobotomyRequestForm"), 72, 45)
{
	if (src.getSigned())
	{
		this->beSigned(Bureaucrat(std::string("Placeholder"), 1));
	}
	this->_target = src._target;
	srand(time(0));
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
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

void	RobotomyRequestForm::act(void) const
{
	int	success = rand() % 2;
	std::cout << "* drilling noises *" << std::endl;
	if (success)
		std::cout << this->_target << " has been robotomized" << std::endl;
	else
		std::cout << "Robotomy of " << this->_target << " has failed" << std::endl;
}
