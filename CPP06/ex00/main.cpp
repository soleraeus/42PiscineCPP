/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:28:04 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/19 12:40:17 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <locale>
#include <iomanip>
#include <string>
#include <cmath>
#include <string>
#include <cstdlib>

void	print_char(char c)
{
	if (c < ' ' || c > '~')
		std::cout << "char:   Non displayable" << std::endl;
	else
		std::cout << "char:   '" << c << "'" << std::endl;
}

int	handle_char(char param)
{
	print_char(param);
	std::cout << "int:    " << static_cast<int>(param) << std::endl;
	std::cout << "float:  "  <<static_cast<float>(param) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(param) << std::endl;
	return (0);
}

int	handle_float(std::string param)
{
	int		i;
	int		pointI;
	size_t	pointT;
	float	base;
	bool	error = false;

	if (param[0] == '-' || param[0] == '+')
		i = 1;
	else
		i = 0;
	pointT = param.find_first_of(".");
	if (pointT == std::string::npos)
		pointI = i - 1;
	else
		pointI = static_cast<int>(pointT);
	for (int j = i; j < pointI ; j++)
	{
		if (!std::isdigit(param[j], std::locale()))
			error = true;
	}
	for (int j = (pointI + 1); j < (static_cast<int>(param.length()) - 1); j++)
	{
		if (!std::isdigit(param[j], std::locale()))
			error = true;
	}
	if (error)
	{
		std::cerr << "Improper float formatting given" << std::endl;
		return (1);
	}
	base = std::strtof(param.data(), NULL);
	if (base < -128 || base > 127)
		std::cout << "char:   impossible" << std::endl;
	else
		print_char(static_cast<char>(base));
	if (static_cast<float>(std::numeric_limits<int>::max()) < base
		|| static_cast<float>(std::numeric_limits<int>::min()) > base)
		std::cout << "int:    impossible" << std::endl;
	else
		std::cout << "int:    " << static_cast<int>(base) << std::endl;
	std::cout << "float:  " << base << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(base) << std::endl;
	return (0);
}

int	handle_double(std::string param)
{
	int		i;
	int		pointI;
	size_t	pointT;
	double	base;
	bool	error = false;

	if (param[0] == '-' || param[0] == '+')
		i = 1;
	else
		i = 0;
	pointT = param.find_first_of(".");
	if (pointT == std::string::npos)
		pointI = i - 1;
	else
		pointI = static_cast<int>(pointT);
	for (int j = i; j < pointI ; j++)
	{
		if (!std::isdigit(param[j], std::locale()))
			error = true;
	}
	for (int j = (pointI + 1); j < static_cast<int>(param.length()); j++)
	{
		if (!std::isdigit(param[j], std::locale()))
			error = true;
	}
	if (error)
	{
		std::cerr << "Improper double formatting given" << std::endl;
		return (1);
	}
	base = std::strtod(param.data(), NULL);
	if (base < -128 || base > 127)
		std::cout << "char:   impossible" << std::endl;
	else
		print_char(static_cast<char>(base));
	if (static_cast<double>(std::numeric_limits<int>::max()) < base
		|| static_cast<double>(std::numeric_limits<int>::min()) > base)
		std::cout << "int:    impossible" << std::endl;
	else
		std::cout << "int:    " << static_cast<int>(base) << std::endl;
	if (static_cast<double>(std::numeric_limits<float>::max()) < base
		|| static_cast<double>(-std::numeric_limits<float>::max()) > base)
		std::cout << "float:  impossible" << std::endl;
	else
		std::cout << "float:  " << static_cast<float>(base) << "f" << std::endl;
	std::cout << "double: " << base << std::endl;
	return (0);
}

int	handle_int(std::string param)
{
	int		i = 0;
	bool	error = false;
	int		base;

	if (param[0] == '+' || param[0] == '-')
		i = 1;
	for (int j = i; j < static_cast<int>(param.length()); j++)
	{
		if (!std::isdigit(param[j], std::locale()))
			error = true;
	}
	if (error)
	{
		std::cerr << "Improper integer formatting given" << std::endl;
		return (1);
	}
	base = std::atoi(param.data());
	if (base < -128 || base > 127)
		std::cout << "char:   impossible" << std::endl;
	else
		print_char(static_cast<char>(base));
	std::cout << "int:    " << base << std::endl;
	std::cout << "float:  " << static_cast<float>(base) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(base) << std::endl;
	return (0);
}

int	handle_numbers(std::string param)
{
	if (param == std::string("-inff") || param == std::string("-inf"))
	{
		std::cout << "char:   impossible" << std::endl;
		std::cout << "int:    impossible" << std::endl;
		std::cout << "float:  -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return (0);	
	}
	if (param == std::string("+inff") || param == std::string("+inf"))
	{
		std::cout << "char:   impossible" << std::endl;
		std::cout << "int:    impossible" << std::endl;
		std::cout << "float:  +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return (0);	
	}
	if (param == std::string("nan") || param == std::string("nanf"))
	{
		std::cout << "char:   impossible" << std::endl;
		std::cout << "int:    impossible" << std::endl;
		std::cout << "float:  nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return (0);	
	}
	try
	{
		if (param[param.length() - 1] == 'f')
			return (handle_float(param));
		else if (param.find_first_of(".") != std::string::npos)
			return (handle_double(param));
		else
			return (handle_int(param));
	}
	catch (std::exception const & e)
	{
		std::cerr << "Improper formatting of argument passed, exception raised: " << e.what() << std::endl;
		return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	std::string	param;

	if (ac != 2)
	{
		std::cerr << "This program expects exactly one argument, the repesentation as string of a C++ litteral (char, int, float or double)" << std::endl;
		return (1);
	}
	param = av[1];
	std::cout  << std::fixed << std::setprecision(1);
	if (param.length() == 1)
	{
		if (!std::isdigit(param[0]))
			return (handle_char(param[0]));
		return (handle_numbers(param));	
	}
	else
	{
		size_t	begin = param.find_first_not_of("\t\n\r\v\f ");
		size_t	end = param.find_last_not_of("\t\n\r\v\f ");
		if (end == std::string::npos)
		{
			std::cerr << "Empty string given as parameter" << std::endl;
			return (1);
		}
		param = param.substr(begin, (end - begin + 1));
		if (param.length() == 1 && !std::isdigit(param[0]))
			return (handle_char(param[0]));
		return (handle_numbers(param));
	}
	return (0);
}
