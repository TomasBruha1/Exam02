#include <unistd.h>

// Print @ the location of the string and move on.
void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	char *str;

// 	str = "Hello";
// 		ft_putstr(str);
// 	return (0);
// }

// Assignment name  : ft_putstr
// Expected files   : ft_putstr.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that displays a string on the standard output.

// The pointer passed to the function contains the address of the string's first
// character.

// Your function must be declared as follows:

// void	ft_putstr(char *str);
