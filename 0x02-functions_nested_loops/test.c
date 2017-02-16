#include <stdio.h>
 
unsigned long fib(unsigned long);

int main(void)
{
	int i = 0;
	int c;
	
	for (c = 1; c <= 50; c++)
    {
		printf("%lu\n", fib(i));
		i++; 
	}
	
	return (0);
}
 
unsigned long fib(unsigned long n)
{
	if ( n == 0 )
		return (0);
	else if ( n == 1 )
		return (1);
	else
		return (fib(n - 1) + fib(n -2));
} 
