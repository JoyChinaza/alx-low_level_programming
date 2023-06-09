#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


#include "lists.h"

/**
 * find_listint_loop -THIS GOES TO FIND A LOOP IN THE LINKED LIST
 * @head: THIS IS THE FIRST LINKED LIST TO SEARCH
 *
 * Return: THE ADDRESS OF THE NODE WHERE THE LOOP STARTS OR NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
