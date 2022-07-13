/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <bdetune@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:02:05 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/13 16:08:46 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void	createAndSign(Bureaucrat * myBureaucrat)
{
	Form	*myForm;
	PresidentialPardonForm	pardon(std::string("Emily"));
	PresidentialPardonForm	pardon2(std::string("Jack"));
	RobotomyRequestForm		robotomy(std::string("Bender"));
	ShrubberyCreationForm	bush(std::string("Jonas"));
	Intern					uselessIntern;

	(void) myBureaucrat;

	try
	{
		myForm = new PresidentialPardonForm(std::string("John"));
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception while creating new Form: " << e.what() << std::endl;
		myForm = NULL;
	}
	if (myForm != NULL)
	{
		myBureaucrat->signForm(*myForm);
		delete myForm;
	}
	myBureaucrat->signForm(pardon);
	myBureaucrat->executeForm(pardon);
	while (myBureaucrat->getGrade() > 5)
		myBureaucrat->promote();
	myBureaucrat->executeForm(pardon);
	myBureaucrat->executeForm(pardon2);
	pardon2 = pardon;
	myBureaucrat->executeForm(pardon2);
	myBureaucrat->executeForm(robotomy);
	myBureaucrat->signForm(robotomy);
	for (int i = 0; i < 10; i++)
	{
		myBureaucrat->executeForm(robotomy);
	}
	myBureaucrat->signForm(bush);
	myBureaucrat->executeForm(bush);
	myBureaucrat->executeForm(bush);
	myForm = uselessIntern.makeForm(std::string("doesn't exist"), std::string("Bella"));
	if (myForm)
	{
		myBureaucrat->signForm(*myForm);
		myBureaucrat->executeForm(*myForm);
		delete myForm;
	}
	myForm = uselessIntern.makeForm(std::string("Presidential Pardon"), std::string("Roger"));
	if (myForm)
	{
		myBureaucrat->signForm(*myForm);
		myBureaucrat->executeForm(*myForm);
		delete myForm;
	}
	myForm = uselessIntern.makeForm(std::string("ROBOTOMY REQUEST"), std::string("C-3PO"));
	if (myForm)
	{
		myBureaucrat->signForm(*myForm);
		myBureaucrat->executeForm(*myForm);
		delete myForm;
	}


}

int main(void)
{
	Bureaucrat	*myBureaucrat;

	try
	{
		myBureaucrat = new Bureaucrat(std::string("Jim"), 151);
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception while creating new Bureaucrat: " << e.what() << std::endl;
		myBureaucrat = NULL;
	}
	try
	{
		myBureaucrat = new Bureaucrat(std::string("Judas"), 20);
		std::cout << *myBureaucrat << std::endl;
		createAndSign(myBureaucrat);
		delete myBureaucrat;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception while creating new Bureaucrat: " << e.what() << std::endl;
		myBureaucrat = NULL;
	}

	return (0);
}
