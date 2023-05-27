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

r = _sqrt_recursion(1);
printf("%d\n", r);
r = _sqrt_recursion(1024);
printf("%d\n", r);
r = _sqrt_recursion(16);
printf("%d\n", r);
r = _sqrt_recursion(17);
printf("%d\n", r);
r = _sqrt_recursion(25);
printf("%d\n", r);
r = _sqrt_recursion(-1);
printf("%d\n", r);
return (0);
}

#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of a number
 *
 * Return: the resulting square root of a number, n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural square root
 * square root of a number
 * @n: number to calculate the square root 
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
