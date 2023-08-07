#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: pointer to file.
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print.
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t letters_read, letters_written;
	FILE *file;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}
	buff = (char *)malloc(letters);
	if (buff == NULL)
	{
		fclose(file);
		return (0);
	}
	letters_read = fread(buff, 1, letters, file);
	if (letters_read <= 0)
	{
		free(buff);
		fclose(file);
		return (0);
	}
	letters_written = write(STDOUT_FILENO, buff, letters_read);
	if (letters_written != letters_read)
	{
		free(buff);
		fclose(file);
		return (0);
	}
	free(buff);
	fclose(file);
	return (letters_written);

}
