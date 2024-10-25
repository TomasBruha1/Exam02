#include <unistd.h>

int	find_char_index(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	repetition;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			repetition = 0;
			if ((argv[1][i] >= 97 && argv[1][i] <= 122) || (argv[1][i] >= 65 && argv[1][i] <= 90))
			{
				repetition = find_char_index(argv[1][i]);
				while (repetition > 0)
				{
					write(1, &argv[1][i], 1);
					repetition--;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

int	find_char_index(char c)
{
	int		index;
	char	str[] = "abcdefghijklmnopqrstuvwxyz";

	index = 0;
	while (c != str[index])
		index++;
	return (index + 1);
}

// OR (main points)

// count = argv[1][i] - 96; aka 'a' + 1;
// count = argv[1][i] - 64; aka 'A' + 1;
// while (count--)
//	  write(1, &argv[1][i], 1);