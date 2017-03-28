#include "lists.h"

/**
 * sum_listint - adds all `n` in list and returns sum
 * @head: head of node
 *
 * Return: sum of all `n`
 */

int sum_listint(listint_t *head)
{
	int i;
	int sum;

	if (head == NULL)
		return (0);

	for (i = 0, sum = 0; head != NULL; i++)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
