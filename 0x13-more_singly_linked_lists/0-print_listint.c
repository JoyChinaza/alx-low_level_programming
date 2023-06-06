#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

#include "lists.h"
#include <stdio.h>

/**
*print_listint - All the elements of a listint_t list are printed
*
*@q: The pointer to the first node in the linked list
*
*Return: Number of nodes available
*/

size_t print_listint(const listint_t *q)
{
	size_t count = 0;

	while (q != NULL)
	{
		printf("%.d\n", q->n);
		q = q->next;
		count++;
	}
	return (count);
}
