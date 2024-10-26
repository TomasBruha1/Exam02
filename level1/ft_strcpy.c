#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

// int	main(void)
// {
// 	char	s1[100];
// 	char	*s2 = "Hello";

// 	write(1, "a", 1);
// 	ft_strcpy(s1, s2);
// 	printf("%s", s2);
// 	return (0);
// }

// Assignment name  : ft_strlen
// Expected files   : ft_strlen.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that returns the length of a string.

// Your function must be declared as follows:

// int	ft_strlen(char *str);
