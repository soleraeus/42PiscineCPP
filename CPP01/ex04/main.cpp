/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:40:16 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/06 15:29:33 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	flush_of(std::string & content, std::string & needle, std::string & replace, std::fstream & out)
{
	std::size_t	found;
	std::string	buf;

	while ((found = content.find(needle)) != std::string::npos)
	{
		content.erase(found, needle.length());
		content.insert(found, replace);
		buf = content.substr(0, (found + replace.length()));
		out << buf;
		content = content.erase(0, (found + replace.length()));
	}
	if (content.length() > needle.length())
	{
		buf = content.substr(0, (content.length() - needle.length()));
		out << buf;
		content = content.erase(0, (content.length() - needle.length()));
	}
	return ;
}

int main(int ac, char **av)
{
	std::fstream	in;
	std::fstream	out;
	std::string		outname;
	std::string		buf;
	std::string		content("");
	std::string		needle;
	std::string		replace;

	if (ac != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	in.open(av[1], std::fstream::in | std::fstream::out);
	if (in.fail())
	{
		std::cerr << "Error while opening file" << std::endl;
		return (1);
	}
	outname = av[1];
	outname += ".replace";
	out.open(outname.c_str(), std::fstream::out | std::fstream::trunc);
	if (out.fail())
	{
		std::cerr << "Error while creating out file" << std::endl;
		return (1);
	}
	needle = av[2];
	replace = av[3];
	while (std::getline(in, buf) && !in.eof() && !in.fail())
	{
		content += buf + "\n";
		if (content.length() > 50000)
			flush_of(content, needle, replace, out);
	}
	if (in.fail() && !in.eof())
	{
		std::cerr << "Error while reading input file" << std::endl;
		return (1);
	}
	if (buf.length())
		content += buf;
	flush_of(content, needle, replace, out);
	out << content;
	return (0);
}
