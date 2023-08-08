#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * exit_with_error - a function that exit with error
 * @code: int value as error code
 * @message: constant string literal
 * @arg: constant string literal.
 * Return: void (nothing)
 */
void exit_with_error(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	ssize_t letters_read, letters_written;
	int file_from, file_to;
	char buffer[BUFFER_SIZE], fd_str[10];

	if (argc != 3)
	{
		exit_with_error(97, "Usage: cp file_from file_to\n", "");
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		exit_with_error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		exit_with_error(99, "Error: Can't write to %s\n", argv[2]);
	}
	while ((letters_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		letters_written = write(file_to, buffer, letters_read);
		if (letters_written == -1)
		{
			close(file_from);
			close(file_to);
			exit_with_error(98, "Error: Can't write to %s\n", argv[2]);
		}
	}
	if (letters_read == -1)
	{
		close(file_from);
		close(file_to);
		sprintf(fd_str, "%d", (file_from == -1) ? file_to : file_from);
		exit_with_error(98, "Error: Can't close fd %s\n", fd_str);
	}
	if (close(file_from) == -1 || close(file_to) == -1)
	{
		sprintf(fd_str, "%d", (file_from == -1) ? file_to : file_from);
		exit_with_error(100, "Error: Can't close fd %s\n", fd_str);
	}
	return (0);
}
