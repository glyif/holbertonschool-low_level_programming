#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: relative or absolute path of the file
 * @letters: number of letters to read and print
 *
 * Return: total number of chars printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *to_print;
	ssize_t rd, wt;
	int file;

	if (filename == NULL)
		return (0);
	to_print = malloc(sizeof(char) * letters);
	if (to_print == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		free(to_print);
		return (0);
	}
	rd = read(file, to_print, letters);
	if (rd < 0)
	{
		free(to_print);
		return (0);
	}
	wt = write(STDOUT_FILENO, to_print, letters);

	if (wt < rd)
	{
		free(to_print);
		return (0);
	}

	if (close(file) < 0)
	{
		free(to_print);
		return (0);
	}
	free(to_print);
	return (rd);
}
