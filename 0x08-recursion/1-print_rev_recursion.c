#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
_print_rev_recursion("\nColton Walker");
return (0);
}
#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse order.
 * @s: The string to be printed in reverse order.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
