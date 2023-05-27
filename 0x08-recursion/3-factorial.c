#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = factorial(1);
printf("%d\n", r);
r = factorial(5);
printf("%d\n", r);
r = factorial(10);
printf("%d\n", r);
r = factorial(-1024);
printf("%d\n", r);
return (0);
}

/**
 * factorial - returns the factorial of a given number
 * @n: number to return the factorial from
 *
 * Return: factorial of a given number n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
