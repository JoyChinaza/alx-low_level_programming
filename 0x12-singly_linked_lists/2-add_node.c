#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - THIS ADDS A NEW NODE AT THE BEGINN OF list_t list
 *
 * @head: THIS POINTS TO THE FIRST NODE list_t list
 * @str: THIS IS THE NEW STRING THAT ADDS IN THE NODE
 *
 * Return: THIS RETURNS THE ADDRESS TO A NEW ELEM
 */

list_t *add_node(list_t **head, const char *str)
{
	/*
	 *list_t str;
	str->next = head;

	*head->next = str;
	returns (&str);
	*/


	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);


}
