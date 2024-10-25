/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruha <tbruha@student.42Prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:32:08 by tbruha            #+#    #+#             */
/*   Updated: 2024/10/18 20:32:09 by tbruha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;
	char lsb;
	unsigned char	bitmask;

	i = 7;
	while (i >= 0)
	{
		bitmask = octet >> i;
		lsb = (bitmask & 1) + '0';
		write(1, &lsb, 1);
		i--;
	}
}

// int	main(void)
// {
// 	print_bits('A');
// 	return (0);
// }

// Assignment name  : print_bits
// Expected files   : print_bits.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
// AT THE END.

// Your function must be declared as follows:

// void	print_bits(unsigned char octet);

// Example, if you pass 2 to print_bits, it will print "00000010"