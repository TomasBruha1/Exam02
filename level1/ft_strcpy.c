/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruha <tbruha@student.42Prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:44:53 by tbruha            #+#    #+#             */
/*   Updated: 2024/09/26 12:44:54 by tbruha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// char	*ft_strcpy(char *s1, char *s2);

// int	main(void)
// {
// 	char	s1[100];
// 	char	*s2 = "Hello";

// 	write(1, "a", 1);
// 	ft_strcpy(s1, s2);
// 	printf("%s", s2);
// 	return (0);
// }

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
