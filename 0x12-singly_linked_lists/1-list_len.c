#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - THIS IS A FUNCTION THAT RETURNS THE NUMBER OF ELEM
 *
 * @h: THIS IS THE PARAMETER FUNCTION FOR ARG
 *
 * Return: NUMBER OF ELEM IN A LINKED LIST
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
