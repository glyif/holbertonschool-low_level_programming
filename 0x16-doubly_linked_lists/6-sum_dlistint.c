#include "lists.h"
/**
 * sum_dlistint - adds up all of the values of dlistint
 * @head: pointer to head of lsit
 *
 * Return: sum of all values of dlinstint list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
