#include "holberton.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: absolute/relative path of the file
 * @text_content: content to be appended
 *
 * Return: 1 on success -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t size, wt;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);

	if (file < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	for (size = 0; text_content[size] != '\0'; size++)
		;

	wt = write(file, text_content, size);

	if (wt < 0)
	{
		close(file);
		return (-1);
	}


	close(file);
	return (1);

}
