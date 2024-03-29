#include "lists.h"

/**
 * sum_listint - func
 *
 * @head: listint_t
 *
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
