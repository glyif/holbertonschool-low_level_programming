#ifndef ZELDA_LINKED
#define ZELDA_LINKED
#include "base_struct.h"
#include <stdlib.h>
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
#endif
