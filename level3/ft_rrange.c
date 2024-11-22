/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruha <tbruha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:24:34 by tbruha            #+#    #+#             */
/*   Updated: 2024/11/22 15:26:12 by tbruha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	arraylen(int x, int y)
{
	int	len;

	if (x >= y)
		len = x - y;
	else
		len = y - x;
	return (len + 1);
}

int	*ft_rrange(int start, int end)
{
	int	*arr;
	int	len;
	int	i;
	
	len = arraylen(start, end);
	if (len == 0)
	{
		arr = malloc(sizeof(int)*1);
		arr[0] = 0;
		return (arr);
	}
	arr = malloc(sizeof(int)*len);
	i = 0;
	while (len > 0)
	{
		if (start > end)
			arr[i] = end + i;
		else
			arr[i] = end - i;
		i++;		
		len--;
	}
	return (arr);	
}

// int	main(void)
// {
// 	int x;
// 	int y;
// 	int	len;
// 	int	*arr;
// 	int i;

// 	i = 0;
// 	x = 10;
// 	y = 3;
// 	len = arraylen(x, y);
// 	arr = ft_rrange(x, y);
// 	while (len)
// 	{
// 		printf("%d\n", arr[i]);
// 		len--;
// 		i++;
// 	}
// 	return (0);
// }

// Assignment name  : ft_rrange
// Expected files   : ft_rrange.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write the following function:

// int     *ft_rrange(int start, int end);

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at end and end at start (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 3, 2 and 1
// - With (-1, 2) you will return an array containing 2, 1, 0 and -1.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing -3, -2, -1 and 0.
