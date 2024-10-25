/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.nbr                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruha <tbruha@student.42Prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 23:15:47 by tbruha            #+#    #+#             */
/*   Updated: 2024/09/25 23:15:53 by tbruha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar(int nbr);

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 9);
		else if (i % 5 == 0)
			write(1, "buzz", 5);
		else if (i % 3 == 0)
			write(1, "fizz", 5);
		else
			ft_printchar(i);
		i++;
		write(1, "\n", 1);
	}
	return (0);
}

void	ft_printchar(int nbr)
{
	char c;

	c = nbr+48;	
	if (nbr > 9)
		{
			ft_printchar(nbr / 10);
			ft_printchar(nbr % 10);
		}
	else
		// write expects a pointer to char so it need to be converted prior
		// and not in the function itsel.
		write(1, &c, 1);
}