#include "lists.h"

/**
 * sum_dlistint - func
 *
 * @head: dlistint_t
 *
 * Return: dlistint_t
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
