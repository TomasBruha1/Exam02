#include <unistd.h>

// Use modulo to find out what to print and then putnbr.
void	ft_printchar(int nbr)
{
	char c;

	c = nbr+48;	
	if (nbr > 9)
		{
			ft_printchar(nbr / 10);
			ft_printchar(nbr % 10);
		}
	else
		// write expects a pointer to char so it need to be converted prior
		// and not in the function itsel.
		write(1, &c, 1);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 9);
		else if (i % 5 == 0)
			write(1, "buzz", 5);
		else if (i % 3 == 0)
			write(1, "fizz", 5);
		else
			ft_printchar(i);
		i++;
		write(1, "\n", 1);
	}
	return (0);
}

// Assignment name  : fizzbuzz
// Expected files   : fizzbuzz.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that prints the numbers from 1 to 100, each separated by a
// newline.

// If the number is a multiple of 3, it prints 'fizz' instead.

// If the number is a multiple of 5, it prints 'buzz' instead.

// If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

// Example:

// $>./fizzbuzz
// 1
// 2
// fizz
// 4
// buzz
// fizz
// 7
// 8
// fizz
// buzz
// 11
// fizz
// 13
// 14
// fizzbuzz
// [...]
// 97
// 98
// fizz
// buzz
// $>