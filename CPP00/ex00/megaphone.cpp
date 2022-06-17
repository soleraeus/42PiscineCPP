#include <iostream>
#include <locale>

int	main(int ac, char **av)
{
	std::locale	loc;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac ; i++)
		{
			for (int j = 0; av[i][j]; j++)
				std::cout << std::use_facet< std::ctype<char> >(loc).toupper(av[i][j]);
		}
		std::cout << std::endl;
	}
	return (0);
}
