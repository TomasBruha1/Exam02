/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruha <tbruha@student.42Prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:13:35 by tbruha            #+#    #+#             */
/*   Updated: 2024/09/26 13:13:37 by tbruha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// int	ft_strlen(char *str);

// int	main(int argc, char **argv)
// {
// 	char	*str = argv[1];
	
// 	if (argc != 2)
// 		return (0);
// 	printf("%d", ft_strlen(str));
// 	return (0);
// }

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}