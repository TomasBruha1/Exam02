#include <stdio.h>

// Nice use of dereferencing and swap, swap, swap.
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	i;
// 	int	j;

// 	i = 3;
// 	j = 42;
// 	ft_swap(&i, &j);
// 	printf("%d\n%d\n", i, j);
// 	return (0);
// }

// Assignment name  : ft_swap
// Expected files   : ft_swap.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that swaps the contents of two integers the adresses of which
// are passed as parameters.

// Your function must be declared as follows:

// void	ft_swap(int *a, int *b);
