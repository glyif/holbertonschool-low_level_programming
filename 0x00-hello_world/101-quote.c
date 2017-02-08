#include <stdio.h>
#include <unistd.h>
/*
* 101-quote.c
* Description: This program takes a string and prints it
* using write.
*/

/**
* main - The main function running everything.
* @void: not taking an arguments.
*
* Return: 1
*/

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}
