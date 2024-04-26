#include "main.h"

/**
 *   main - check the code.
 *   print ten times of alphabet a to z
 *
 *   Return: Always 0
 **/

	void print_alphabet_x10(void)

{

	int i, j;

for (i = 0; i < 10; i++)

{

for (j = 0; j < 26; j++)

	putchar('a' + j);

putchar('\n');
}

}
