/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:28:04 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/28 11:35:59 by bdetune          ###   ########.fr       */
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
#include <sstream>

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
	std::cout << "float:  "  <<static_cast<float>(param) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(param) << ".0" << std::endl;
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
	if (std::strtof("inff", NULL) == base)
	{
		std::cout << "float:  inff" << std::endl;
		std::cout << "double: inf" << std::endl;
		return (0);
	}
	else if (std::strtof("-inff", NULL) == base)
	{
		std::cout << "float:  -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return (0);
	}

	std::ostringstream	oss1;
	std::string			fRep;
	oss1 << std::fixed << std::setprecision(20);
	oss1 << base;
	fRep = oss1.str();
	std::size_t	pos1 = fRep.find_last_of(".");
	if (pos1 != std::string::npos)
	{
		std::size_t	pos2 = fRep.find_last_not_of("0");
		if (pos2 != std::string::npos)
		{
			if (pos2 > pos1)
				fRep.erase(pos2+1);
			else
				fRep.erase(pos1+2);
		}
		std::cout << "float:  " << fRep << "f" << std::endl;
	}
	else
		std::cout << "float:  " << base << ".0f" << std::endl;
	std::ostringstream	oss2;
	std::string			dRep;
	oss2 << std::fixed << std::setprecision(20);
	oss2 << static_cast<double>(base);
	dRep = oss2.str();
	pos1 = dRep.find_last_of(".");
	if (pos1 != std::string::npos)
	{
		std::size_t	pos2 = dRep.find_last_not_of("0");
		if (pos2 != std::string::npos)
		{
			if (pos2 > pos1)
				dRep.erase(pos2+1);
			else
				dRep.erase(pos1+2);
		}
		std::cout << "double: " << dRep << std::endl;
	}
	else
		std::cout << "double: " << dRep << ".0" << std::endl;
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
	if (std::strtod("inf", NULL) == base)
	{
		std::cout << "float:  inff" << std::endl;
		std::cout << "double: inf" << std::endl;
		return (0);
	}
	else if (std::strtod("-inf", NULL) == base)
	{
		std::cout << "float:  -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return (0);
	}
	else if (static_cast<double>(std::numeric_limits<float>::max()) < base
		|| static_cast<double>(-std::numeric_limits<float>::max()) > base)
		std::cout << "float:  impossible" << std::endl;
	else
	{
		std::ostringstream	oss1;
		std::string			fRep;
		oss1 << std::fixed << std::setprecision(20);
		oss1 << static_cast<float>(base);
		fRep = oss1.str();
		std::size_t	pos1 = fRep.find_last_of(".");
		if (pos1 != std::string::npos)
		{
			std::size_t	pos2 = fRep.find_last_not_of("0");
			if (pos2 != std::string::npos)
			{
				if (pos2 > pos1)
					fRep.erase(pos2+1);
				else
					fRep.erase(pos1+2);
			}
			std::cout << "float:  " << fRep << "f" << std::endl;
		}
		else
			std::cout << "float:  " << base << ".0f" << std::endl;
	}
	std::ostringstream	oss2;
	std::string			dRep;
	oss2 << std::fixed << std::setprecision(20);
	oss2 << base;
	dRep = oss2.str();
	std::size_t	pos1 = dRep.find_last_of(".");
	if (pos1 != std::string::npos)
	{
		std::size_t	pos2 = dRep.find_last_not_of("0");
		if (pos2 != std::string::npos)
		{
			if (pos2 > pos1)
				dRep.erase(pos2+1);
			else
				dRep.erase(pos1+2);
		}
		std::cout << "double: " << dRep << std::endl;
	}
	else
		std::cout << "double: " << dRep << ".0" << std::endl;
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
	std::cout << "float:  " << static_cast<float>(base) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(base) << ".0" << std::endl;
	return (0);
}

int	handle_numbers(std::string paramArg)
{
	std::string	param;
	std::locale	loc;

	for (std::string::size_type j = 0; j < paramArg.length(); j++)
		param += std::tolower(paramArg[j], loc);
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
	if (param == std::string("inf") || param == std::string("inff"))
	{
		std::cout << "char:   impossible" << std::endl;
		std::cout << "int:    impossible" << std::endl;
		std::cout << "float:  inff" << std::endl;
		std::cout << "double: inf" << std::endl;
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
	if (param.find_first_of(".") != std::string::npos)
	{
		if (param[param.length() - 1] == 'f')
			return (handle_float(param));
		else
			return (handle_double(param));
	}
	else
		return (handle_int(param));
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
