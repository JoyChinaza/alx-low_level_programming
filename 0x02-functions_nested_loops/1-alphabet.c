#include "main.h"

/**
 *print_alphabet - print alphabet lowercase from a to z
 *
 *Return: Always 0
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar (alphabet);
	}

	putchar('\n');

}
