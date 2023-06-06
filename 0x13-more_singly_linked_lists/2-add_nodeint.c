#include "lists.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * Task 2: Add node
 *
 * add_nodeint - This adds a new node at the beginn of linked list
 * @head: This is a pointer to the first node in the list
 * @n:This is the number to insert in that new node in the list
 *
 * Return: This is the pointer to the new node, or NULL if it fails
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
