#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * get_nodeint_at_index - THIS RETURNS NODE AT INDEX N LINKED LIST
 *
 * @head: THIS IS THE FIRST NODE
 * @index:THIS IS THE INDEX OF NODE THAT WILL BE RETURNED
 *
 * Return: NULL IF THE NODE DOES NOT EXIST
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
