#include <unistd.h>

// Substract a(97) + 13 and %mod 26 and add 97 back.
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	i;

		i = 0;
		while(argv[1][i])
		{
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
				argv[1][i] = (argv[1][i] - 'a' + 13)%26 + 'a';
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
				argv[1][i] = (argv[1][i] - 'A' + 13)%26 + 'A';
			write(1, &argv[1][i], 1);
			i++;		
		}
	}
	write(1, "\n", 1);
	return (0);
}

// Assignment name  : rot_13
// Expected files   : rot_13.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays it, replacing each of its
// letters by the letter 13 spaces ahead in alphabetical order.

// 'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

// The output will be followed by a newline.

// If the number of arguments is not 1, the program displays a newline.

// Example:

// $>./rot_13 "abc"
// nop
// $>./rot_13 "My horse is Amazing." | cat -e
// Zl ubefr vf Nznmvat.$
// $>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
// NxwuM mYXVWm , 23l $
// $>./rot_13 | cat -e
// $
// $>
// $>./rot_13 "" | cat -e
// $
// $>
