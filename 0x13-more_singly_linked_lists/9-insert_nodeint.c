#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * insert_nodeint_at_index - THIS INSERTS A NEW NODE IN A LINKED LIST
 * @head: THIS IS THE POINTER TO THE FIRST NODE
 * @idx: INDEX OF LIST WHERE NEW NODE SHOULD BE ADDED
 * @n: THIS IS THE DATA TO INSERT IN NEW NODE
 *
 * Return: THE ADDRESS OF NEW NODE OR NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
