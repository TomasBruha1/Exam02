/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruha <tbruha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:49:31 by tbruha            #+#    #+#             */
/*   Updated: 2024/11/26 18:11:07 by tbruha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// if match_found, mark a flag and at the end of the loop check for the flag.
size_t	ft_strspn(const char *s, const char *accept)
{
	int	i;
	int	j;
	int	match_found;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		match_found = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				match_found = 1;
				break;
			}
			j++;	
		}
		if (!match_found)
			break;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	printf("%zu", ft_strspn("Hello how are you?", "Hello how"));
// 	return (0);
// }

// Assignment name	: ft_strspn
// Expected files	: ft_strspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the strspn function 
// (man strspn).

// The function should be prototyped as follows:

// size_t	ft_strspn(const char *s, const char *accept);