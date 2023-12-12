#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] > 96 && argv[i][j] < 123)
				{	
					std::cout << (char)(argv[i][j] - 32);
				}
				else
				{
					std::cout << (char)(argv[i][j]);
				}
				j++;
			}
			i++;
		}
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
}
