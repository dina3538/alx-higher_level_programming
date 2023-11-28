#include "lists.h"

/**
 * insert_node - Inserts a number
 * @head: A pointer.
 * @number: the number to insert.
 * Author - Tolulope Fakunle
 * Return: null or pointer
*/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = number;

	if (node == NULL || node->n >= number)
	{
		add->next = node;
		*head = add;
		return (add);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	add->next = node->next;
	node->next = add;

	return (add);
}
