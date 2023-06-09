#include <stdio.h>

/**
 * main - Prints the number of arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int h;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (h = 0; *argv; h++, argv++)
			;

		printf("%d\n", h - 1);
	}

	return (0);
}
