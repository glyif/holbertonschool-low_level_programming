#ifndef HOLBERTON_H
#define HOLBERTON_H
/** _putchar **/
int _putchar(char c);

/** trust no one **/
void *malloc_checked(unsigned int b);

/** strconcat n **/
char *string_nconcat(char *s1, char *s2, unsigned int n);

/** calloc **/
void *_calloc(unsigned int nmemb, unsigned int size);

/** array_range **/
int *array_range(int min, int max);

/** realloc **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
