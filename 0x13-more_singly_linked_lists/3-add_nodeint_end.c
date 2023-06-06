#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * add_nodeint_end: THIS ADDS A NODE AT THE END OF A LINKED LIST
 *
 * @head: THIS IS THE POINTER TO THE FIRST ELEM IN LIST
 *
 * @n: THIS IS THE DATA TO INSERT IN THE NEW ELEM
 *
 * Return: THIS RETURNS POINTER TO THE NEW ELEM OR NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (NULL);
}
