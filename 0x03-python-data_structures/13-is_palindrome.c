#include "lists.h"

/**
 * rev_list - reverses a linked list
 * @head: pointer
 *
 * Return: pointer
*/
void rev_list(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
}

/**
 * is_palindrome - checks if a linked list is a palindrome
 * @head: double pointer
 *
 * Return: 1 if it is, 0 if not
 */
int is_palindrome(listint_t **head)
{
	listint_t *s = *head, *f = *head, *temp = *head, *dup = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	while (1)
	{
		f = f->next->next;
		if (!f)
		{
			dup = s->next;
			break;
		}
		if (!f->next)
		{
			dup = s->next->next;
			break;
		}
		s = s->next;
	}

	rev_list(&dup);

	while (dup && temp)
	{
		if (temp->n == dup->n)
		{
			dup = dup->next;
			temp = temp->next;
		}
		else
			return (0);
	}

	if (!dup)
		return (1);

	return (0);
}
