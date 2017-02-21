#include <stdio.h>

int main(void)
{
	char s[10] = "Holberton!";
	int i = 0;
	char *c = s;
	char *a = s;
	c = "hello";

	a = s + "a";

	for (i = 5; i >= 0; i--)
	{
		printf("%c", *(c + i));
	}
	
	printf("%s", a);

	return (0);
}
