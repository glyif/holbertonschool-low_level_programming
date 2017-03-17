#ifndef VAR_FUNC_H
#define VAR_FUNC_H
/**
 * struct print - struct that matches a formater to the correct print function
 * @c: formater
 * @f: function
 */
struct print
{
	char *c;
	void (*f)();
};
typedef struct print print;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
