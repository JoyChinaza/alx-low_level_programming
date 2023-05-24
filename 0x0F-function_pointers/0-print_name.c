#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_name - print name using pointer to function before addition
 * @name: string to add to pointer
 * @f: pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
void array_iterator(int *array,size_t size, void(*action)(int));	
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
