/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruha <tbruha@student.42Prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 23:15:42 by tbruha            #+#    #+#             */
/*   Updated: 2024/09/25 23:15:43 by tbruha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		// Here it needed to specify the argument # with [1].
		while (argv[1][i] == 9 || argv[1][i] == 32)
			i++;
		while (argv[1][i] > 32 && argv[1][i] < 127 && argv)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
