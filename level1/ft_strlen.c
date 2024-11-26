#include <stdio.h>

// Just do it!
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// int	main(int argc, char **argv)
// {
// 	char	*str = argv[1];

// 	if (argc != 2)
// 		return (0);
// 	printf("%d", ft_strlen(str));
// 	return (0);
// }

// Assignment name  : ft_strlen
// Expected files   : ft_strlen.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that returns the length of a string.

// Your function must be declared as follows:

// int	ft_strlen(char *str);
