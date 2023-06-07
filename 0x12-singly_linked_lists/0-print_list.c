#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - THIS PRINTS THE ELEM OF list_t list
 * @h: THIS IS THE ARG FOR NEW list_t node
 * IF str IS NULL PRINT [0] (nil)
 * Return: THIS IS THE NUMBER OF NODES
 */

size_t print_list(const list_t *h)
{

	size_t count = 0;

	while (h != NULL)
	{

		if (h->str != NULL)
		{
		printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
		printf("[0] (nil)\n");
		}
		h = h->next;
		count++;
	}

		return (count);
}
