#include "lists.h"
/**
 * add_dnodeint_end - adds a node to the end
 * @head: head of the linked list
 * @n: int stored in node
 *
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new, *tmp;

    new = malloc(sizeof(dlistint_t));

    if (new == NULL)
        return (NULL);

    if (*head != NULL)
    {
        tmp = *head;
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = new;
    }
    else
    {
        *head = new;
    }

    new->next = NULL;
    new->prev = *head;
    new->n = n;

    return (new);

}
