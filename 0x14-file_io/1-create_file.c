#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: absolute/relative path to a file
 * @text_content: content to write into the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, size;
	size_t wt;
	
	if (filename == NULL)
		return (-1);

	for (size = 0; text_content[size] != '\0'; size++)
		;

	file = open(filename, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);

	if (file < 0)
		return (-1);

	if (size == 0)
	{
		close(file);
		return (1);
	}

	wt = write(file, text_content, size);

	if (wt < 0)
	{
		close(file);
		return(-1);
	}

	if (close(file) < 0)
		return (-1);

	return (1);


}
