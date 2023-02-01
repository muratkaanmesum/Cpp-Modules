#include <iostream>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	ch;

	if (argv[1] == NULL)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 1;
		j = 0;
		while (argv[i] != NULL)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				ch = (char)toupper(argv[i][j]);
				std::cout << ch;
				j++;
			}
			i++;
		}
	}
	return (0);
}
