#include <unistd.h>

// If you encounter alph char, find it's index, then loop over index and move to next after.
int	find_char_lower_index(char c)
{
	int		index;
	char	str[] = "abcdefghijklmnopqrstuvwxyz";

	index = 0;
	while (c != str[index])
		index++;
	return (index + 1);
}

int	find_char_upper_index(char c)
{
	int		index;
	char	str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	index = 0;
	while (c != str[index])
		index++;
	return (index + 1);
}

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
				if (argv[1][i] >= 97 && argv[1][i] <= 122)
					repetition = find_char_lower_index(argv[1][i]);
				else if (argv[1][i] >= 65 && argv[1][i] <= 90)
					repetition = find_char_upper_index(argv[1][i]);
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

// OR (main points)

// count = argv[1][i] - 96; aka 'a' + 1;
// count = argv[1][i] - 64; aka 'A' + 1;
// while (count--)
// 	  write(1, &argv[1][i], 1);

// Assignment name  : repeat_alpha
// Expected files   : repeat_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.

// Examples:

// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | cat -e
// Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
// $>./repeat_alpha 'abacadaba 42!' | cat -e
// abbacccaddddabba 42!$
// $>./repeat_alpha | cat -e
// $
// $>
// $>./repeat_alpha "" | cat -e
// $
// $>
