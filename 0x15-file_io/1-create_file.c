#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure.
 * if filename is NULL return -1
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	size_t content_len;
	ssize_t letters_written;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_d == -1)
		return (-1);

	if (text_content != NULL)
	{
		content_len = 0;

		while (text_content[content_len] != '\0')
			content_len++;

		letters_written = write(file_d, text_content, content_len);
		if (letters_written == -1)
		{
			close(file_d);
			return (-1);
		}
	}
	close(file_d);
	return (1);
}
