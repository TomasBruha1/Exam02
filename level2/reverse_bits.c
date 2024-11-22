#include <unistd.h>
#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int				count;
	unsigned char	reversed;

	count = 0;
	reversed = 0;
	while (count <= 7)
	{
		reversed = reversed | (((octet >> count) & 1) << (7 - count));
		count++;
	}
	return (reversed);
}

// int	main(int argc, char **argv)
// {
// 	unsigned char	reserved;

// 	if (argc == 2)
// 	{
// 		reserved = reverse_bits(*argv[1]);
// 		for (int i = 7; i >= 0; i--)
// 			write(1, (reserved & (1 << i)) ? "1" : "0", 1);
// 		write(1, "\n", 1);	
// 	}
// 	return (0);
// }

// Write a function that takes a byte, reverses it, bit by bit (like the
// example) and returns the result.

// Your function must be declared as follows:

// unsigned char	reverse_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0100  0001
//      ||
//      \/
//  1000  0010