#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * free_listint2 - THIS FREES A LINKED LIST
 *
 * @head: POINTER TO listint_t LIST TO FREE
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
