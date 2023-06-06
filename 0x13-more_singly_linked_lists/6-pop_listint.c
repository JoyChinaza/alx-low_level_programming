#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * pop_listint - THIS DELETES THE HEAD NODE OF LINKED LIST
 * @head: THIS POINTS TO THE FIRST ELEM IN LINKED LIST
 *
 * Return: THE DATA IN THE FIRST ELEM THAT WAS DELEED
 * OR 0 IF LIST IS EMPTY
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
