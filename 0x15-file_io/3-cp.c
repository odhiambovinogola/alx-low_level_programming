#include "main.h"

/**
 * handle_error - handles errors for cp program
 * @exit_code: exit code
 * @message: error message format
 * @args: variable argument list
 */

void handle_error(int exit_code, const char *message, va_list args)
{
	dprintf(STDERR_FILENO, message, va_arg(args, const char *));
	exit(exit_code);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, otherwise exit codes for errors
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int source_fd, dest_fd;
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		handle_error(97, "Usage: cp file_from file_to\n", 0);

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
		handle_error(98, "Error: Can't read from file %s\n", argv[1]);

	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest_fd == -1)
		handle_error(99, "Error: Can't write to %s\n", argv[2]);

	while ((bytes_read = read(source_fd, buffer, 1024)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1)
		handle_error(99, "Error: Can't write to %s\n", argv[2]);
	}

	if (bytes_read == -1)
		handle_error(98, "Error: Can't read from file %s\n", argv[1]);
	if (close(source_fd) == -1)
		handle_error(100, "Error: Can't close fd %d\n", source_fd);
	if (close(dest_fd) == -1)
		handle_error(100, "Error: Can't close fd %d\n", dest_fd);

	return (0);
}
