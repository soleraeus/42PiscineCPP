/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:25:36 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/13 14:53:13 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target): Form(std::string("Shrubbery Creation"), 145, 137)
{
	this->_target = target;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src): Form(std::string("Shrubbery Creation"), 145, 137)
{
	if (src.getSigned())
	{
		this->beSigned(Bureaucrat(std::string("Placeholder"), 1));
	}
	this->_target = src._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (rhs.getSigned())
	{
		this->beSigned(Bureaucrat(std::string("Placeholder"), 1));
	}
	this->_target = rhs._target;
	return (*this);
}

void	ShrubberyCreationForm::act(void) const
{
	std::fstream	out;
	std::string		target = this->_target + "_shrubbery";

	out.open(target.data(), std::fstream::out | std::fstream::trunc);
	if (out.fail())
	{
		std::cerr << "Error while opening file " << target << ", cannot create bush";
		return ;
	}
	out << "            ,@@@@@@@,             " << std::endl;
	out << "    ,,,.   ,@@@@@@/@@,  .oo8888o. " << std::endl;
	out << " ,&**&%&&%,@@@@@/@@@@@@,8888*88/8o" << std::endl;
	out << ",%&**&&%&&%,@@@*@@@/@@@88*88888/88'" << std::endl;
	out << "%&&%&%&/%&&%@@*@@/ /@@@88888*88888'" << std::endl;
	out << "%&&%/ %&*%&&@@* V /@@' `88*8 `/88'" << std::endl;
	out << "`&% | `*/%'    |.|         |'|8'" << std::endl;
	out << "    |o|        | |         | |" << std::endl;
	out << "    |.|        | |         | |" << std::endl;
    out << " ___|.|_//_|__|| ,__//__&_/. |_//__/_" << std::endl;
	out.close();
}
