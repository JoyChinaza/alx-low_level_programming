#include "lists.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
* Linked list
*
* A function that returns the num of elem
* listint_len - This returns the number of elem in a linked listint_t list.
*
*@h:This is pointer to first node in the linked list
*
*Return: This is the number of elem in the list.
*/

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
