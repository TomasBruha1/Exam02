#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *s)
{
	int	result;
	int	i;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
			i++;
		}
		result = result * 10 + s[i] - 48;
		i++;
	}
	return (result * sign);
}

int	is_prime(int nbr)
{
	int i;

	i = 2;
	if (nbr <= 1)
		return (0);
	while (i * i <= nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (i);
}

void	put_nbr(int nbr)
{
	char	digit;
	
	if (nbr >= 10)
		put_nbr(nbr / 10);
	digit = nbr % 10 + 48;
	write(1, &digit, 1);
}

int	main(int argc, char **argv)
{
	int	nbr;
	int	sum;

	nbr = ft_atoi(argv[1]);
	sum = 0;
	if (argc == 2 && nbr > 0)
	{
		while (nbr > 0)
		{
			if (is_prime(nbr))
				sum += nbr;
			nbr--;
		}
		put_nbr(sum);
	}
	else 
		put_nbr(0);
	write(1, "\n", 1);
	return (0);
}

// Assignment name  : add_prime_sum
// Expected files   : add_prime_sum.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------

// Write a program that takes a positive integer as argument and displays the sum
// of all prime numbers inferior or equal to it followed by a newline.

// If the number of arguments is not 1, or the argument is not a positive number,
// just display 0 followed by a newline.

// Yes, the examples are right.

// Examples:

// $>./add_prime_sum 5
// 10
// $>./add_prime_sum 7 | cat -e
// 17$
// $>./add_prime_sum | cat -e
// 0$
// $>
