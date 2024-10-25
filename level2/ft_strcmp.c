#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	diff = s1[i] - s2[i];
	return (diff);
}

// int	main(void)
// {
// 	char	s1[] = "aaa";
// 	char	s2[] = "aab";

// 	printf("%d\n", ft_strcmp(s1, s2));
// 	return (0);
// }
