#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * sum_listint - THIS SUMS ALL THE DATA IN listint_t linked list
 *
 * @head:THIS IS THE FIRST NODE
 *
 * Return: THE SUM OR 0 IS THE LIST IS EMPTY
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
