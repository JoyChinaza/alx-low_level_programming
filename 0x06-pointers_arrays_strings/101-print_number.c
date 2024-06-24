#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to be printed
 */
void print_number(int n)
{
    int divisor = 1;
    int num = n;

    /* Handle negative numbers */
    if (n < 0)
    {
        _putchar('-');
        num = -num;
    }

    /* Count digits and find the highest power of 10 less than num */
    while (num / divisor >= 10)
    {
        divisor *= 10;
    }

    /* Print each digit */
    while (divisor != 0)
    {
        int digit = num / divisor;
        _putchar(digit + '0');
        num %= divisor;
        divisor /= 10;
    }
}

