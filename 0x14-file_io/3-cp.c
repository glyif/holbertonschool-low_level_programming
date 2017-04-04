#include "holberton.h"

int main(int argc, char **argv)
{
	if (argc != 3)
		exit(97);

	if (argv[1] == NULL || argv[2] == NULL)
		exit(97);

	file_copy(argv[1], argv[2]);

	return (
