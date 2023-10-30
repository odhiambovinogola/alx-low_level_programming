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
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	text_buffer = malloc(sizeof(char) * letters + 1);
	if (text_buffer == NULL)
		return (0);

	bytes_read = read(file_descriptor, text_buffer, letters);
	if (bytes_read == -1)
		return (0);

	text_buffer[letters] = '\0';
	close(file_descriptor);

	bytes_written = write(STDOUT_FILENO, text_buffer, bytes_read);
	if (bytes_written == -1)
		return (0);

	free(text_buffer);

	return (bytes_read);
}
