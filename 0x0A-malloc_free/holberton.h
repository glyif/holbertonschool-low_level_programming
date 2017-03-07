#ifndef HOLBERTON_H
#define HOLBERTON_H
/** _putchar **/
int _putchar(char c);

/** creating memory for an array **/
char *create_array(unsigned int size, char c);

/** copying a read only array **/
char *_strdup(char *str);

/** concat two string into 1 **/
char *str_concat(char *s1, char *s2);

/** allocating a 2d array **/
int **alloc_grid(int width, int height);

/** freeing memory for a 2d array */
void free_grid(int **grid, int height);

/** concating ac amount of strings **/
char *argstostr(int ac, char **av);
#endif
