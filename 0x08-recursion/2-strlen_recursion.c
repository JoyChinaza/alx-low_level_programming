#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int n;

n = _strlen_recursion("Corbin Coleman");
printf("%d\n", n);
return (0);
}
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured with length.
 *
 * Return: The length of the string to be measured.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
