/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <bdetune@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:02:05 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/11 20:24:32 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat jim(std::string("Jim"), 151);
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << "Grade Too High Exception: " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << "Grade Too Low Exception: " << e.what() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception while creating new Bureaucrat: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat john(std::string("John"), 0);
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << "Grade Too High Exception: " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << "Grade Too Low Exception: " << e.what() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception while creating new Bureaucrat: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat judas(std::string("Judas"), 1);
		std::cout << judas << std::endl;
		judas.promote();
		std::cout << judas << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << "Grade Too High Exception: " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << "Grade Too Low Exception: " << e.what() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception while creating new Bureaucrat: " << e.what() << std::endl;
	}



	return (0);
}
