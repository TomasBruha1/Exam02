#include <unistd.h>

char	*rev_print(char *str)
{
	char	c;
	int		i;
		
	c = *str + 48;
	i = 0;
	while (str[i])
		i++;
	while (i--)
	{
		write(1, &str[i], 1);
	}
	return (str);
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		rev_print(argv[1]);
// 	return (0);
// }

// Assignment name  : rev_print
// Expected files   : rev_print.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that takes a string, and displays the string in reverse
// followed by a newline.

// The original string must not be modified.

// You must return the string passed as a parameter.

// Your function must be declared as follows:

// char *rev_print(char *str);

// Examples:

// int main(void)
// {
//   rev_print("Hello world");
//   write (1, "\n", 1);
//   rev_print("tnirp esreveR");
//   write (1, "\n", 1);
//   rev_print("");
//   write (1, "\n", 1);
// }

// Output :
// $> ./a.out | cat -e
// dlrow olleH$
// $> ./a.out | cat -e
// Reverse print$
// $> ./a.out | cat -e
// $
