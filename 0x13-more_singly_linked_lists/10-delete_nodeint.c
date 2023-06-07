#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * delete_nodeint_at_index - THIS DELETS THE NODE AT INDEX
 * @head: THIS IS HE POINTER TO THE FIRST ELEM
 * @index: THIS IS INDEX OF THE NODE THAT SHOULD BE DELETED
 *
 * Return: 1 IF IT SUCCEEDED, -1 IF IT FAILWZ
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
