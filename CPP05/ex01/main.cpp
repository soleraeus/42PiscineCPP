/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <bdetune@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:02:05 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/12 12:30:33 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	createAndSign(Bureaucrat * myBureaucrat)
{
	Form	*myForm;

	(void) myBureaucrat;

	try
	{
		myForm = new Form(std::string("Useless"), 151, 151);
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception while creating new Form: " << e.what() << std::endl;
		myForm = NULL;
	}
	if (myForm != NULL)
	{
		try
		{
			myBureaucrat->signForm(*myForm);
		}
		catch (std::exception & e){}
		delete myForm;
	}
	try
	{
		myForm = new Form(std::string("Useless"), 0, 151);
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception while creating new Form: " << e.what() << std::endl;
		myForm = NULL;
	}
	if (myForm != NULL)
	{
		try
		{
			myBureaucrat->signForm(*myForm);
		}
		catch (std::exception & e){}
		delete myForm;
	}
	try
	{
		myForm = new Form(std::string("Useless"), 19, 5);
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception while creating new Form: " << e.what() << std::endl;
		myForm = NULL;
	}
	if (myForm != NULL)
	{
		try
		{
			myBureaucrat->signForm(*myForm);
		}
		catch (std::exception & e){}
		delete myForm;
	}
	try
	{
		myForm = new Form(std::string("Useless2"), 20, 5);
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception while creating new Form: " << e.what() << std::endl;
		myForm = NULL;
	}
	if (myForm != NULL)
	{
		try
		{
			myBureaucrat->signForm(*myForm);
			std::cout << *myForm << std::endl;
		}
		catch (std::exception & e){}
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
