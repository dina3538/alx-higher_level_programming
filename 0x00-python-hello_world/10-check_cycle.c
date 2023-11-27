#include<stdlib.h>
#include<stdio.h>
#include "list.h"

/**
 * check_cycle - check if a siny linked list has a cycle
 * @list: the list
 * Return: 0 or 1
 */

int check_cycle(listint_t *list)
{
	listint_t *low = list;
	listint_t *high = list;

	while (high && high->next)
	{
		low = low->next;
		high = high->next->next;
		if (low == high)
			return (1);
	}
	return (0);
}
