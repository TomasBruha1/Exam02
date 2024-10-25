/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruha <tbruha@student.42Prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:38:18 by tbruha            #+#    #+#             */
/*   Updated: 2024/09/26 13:38:20 by tbruha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = 'a' + 'z' - argv[1][i];
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] = 'A' + 'Z' - argv[1][i];
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, &"\n", 1);
	return (0);
}
