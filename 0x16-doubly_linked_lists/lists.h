#ifndef LISTS_H
#define LISTS_H
#include "base_struct.h"
#include <stdlib.h>
#include <stdio.h>
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
#endif
