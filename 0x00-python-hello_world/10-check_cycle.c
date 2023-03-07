#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - checks if a singly linked is a cycle or not
 * @list: The head node
 * Return: 1 if it's a cycle or 0 if it's not
 */
int check_cycle(listint_t *list)
{
	listint_t *temp = list->next;

	if (list == NULL)
		return (-1);
	while (temp != NULL && temp != list)
	{
		if (temp->next == NULL)
			return (0);
		if (temp->next == list)
			return (1);
		temp = temp->next;
	}
	if (temp->next == NULL)
		return (0);
	return (1);
}
