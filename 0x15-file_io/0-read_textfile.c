#include "main.h"

/**
 * read_textfile - Reads text file and prints it to the POSIX standard output
 * @filename: The name of the file.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *text_buffer;
	ssize_t len_read, len_written;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	text_buffer = malloc(sizeof(char) * letters);
	if (text_buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	len_read = read(file_descriptor, text_buffer, letters);
	close(file_descriptor);
	if (len_read == -1)
	{
		free(text_buffer);
		return (0);
	}

	len_written = write(STDOUT_FILENO, text_buffer, len_read);
	free(text_buffer);
	if (len_read != len_written)
		return (0);

	return (len_written);
}
