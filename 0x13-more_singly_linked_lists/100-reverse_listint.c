#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * reverse_listint - THIS REVERSE A LINKED LIST
 * @head: THIS IS THE FIRST NODE
 *
 * Return: POINTER TO THE FIRST NODE OF REVERSED LIST
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
