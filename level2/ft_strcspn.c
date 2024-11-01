#include <stdio.h>
#include <unistd.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject [j])
				return (i);
			j++;	
		}
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	printf("%zu", ft_strcspn("Hello how are you?", "hw?"));
// 	return (0);
// }

// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// --------------------------------------------------------

// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// The function should be prototyped as follows:

// size_t	ft_strcspn(const char *s, const char *reject);