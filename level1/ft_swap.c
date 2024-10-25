/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruha <tbruha@student.42Prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:22:50 by tbruha            #+#    #+#             */
/*   Updated: 2024/09/26 13:22:51 by tbruha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// void	ft_swap(int *a, int *b);

// int	main(void)
// {
// 	int	i;
// 	int	j;

// 	i = 3;
// 	j = 42;
// 	ft_swap(&i, &j);
// 	printf("%d\n%d\n", i, j);
// 	return (0);
// }

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}