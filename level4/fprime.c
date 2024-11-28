#include <stdio.h>
#include <stdlib.h>

// Check for factor less or up to nbr. After check if nbr 1 else print *.
//Special case for nbr = 1.
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	nbr;
		int	factor;
		nbr = atoi(argv[1]);
		if (nbr == 1)
			printf("1");
		if (nbr >= 2)
		{
			factor = 2;
			while (factor <= nbr && nbr != 1)
			{
				if (nbr % factor == 0)
				{
					printf("%d", factor);
					nbr = nbr / factor;
					if (nbr != 1)
						printf("*");
					factor = 1;
				}
				factor++;
			}
		}
	}
	printf("\n");
	return (0);
}

// Assignment name  : fprime
// Expected files   : fprime.c
// Allowed functions: printf, atoi
// --------------------------------------------------------------------------------

// Write a program that takes a positive int and displays its prime factors on the
// standard output, followed by a newline.

// Factors must be displayed in ascending order and separated by '*', so that
// the expression in the output gives the right result.

// If the number of parameters is not 1, simply display a newline.

// The input, when there is one, will be valid.

// Examples:

// $> ./fprime 225225 | cat -e
// 3*3*5*5*7*11*13$
// $> ./fprime 8333325 | cat -e
// 3*3*5*5*7*11*13*37$
// $> ./fprime 9539 | cat -e
// 9539$
// $> ./fprime 804577 | cat -e
// 804577$
// $> ./fprime 42 | cat -e
// 2*3*7$
// $> ./fprime 1 | cat -e
// 1$
// $> ./fprime | cat -e
// $
// $> ./fprime 42 21 | cat -e
// $
