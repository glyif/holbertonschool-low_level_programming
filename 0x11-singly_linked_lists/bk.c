#include "lists.h"
/**
 * free_list - frees linked list
 * @head: head of linked list
 */

void free_list(list_t *head)
{

	if (head != NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}

}
