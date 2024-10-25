/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruha <tbruha@student.42Prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:25:47 by tbruha            #+#    #+#             */
/*   Updated: 2024/09/26 16:25:48 by tbruha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// It works except the * operator. It needs to be put as argument in "".
int	main(int argc, char **argv)
{
	int		result;
	int		a;
	int		b;
	char	*operator;

	result = 0;
	if (argc == 4)
	{
		operator = argv[2];
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		if (*operator == '+')
			result = a + b;
		if (*operator == '-')
			result = a - b;
		if (*operator == '*')
			result = a * b;
		if (*operator == '/')
			result = a / b;
		if (*operator == '%')
			result = a % b;
		printf("%d", result);
	}
	printf("\n");
	return (0);
}
