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
	int fd;
	ssize_t len_read, len_write;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	len_read = read(fd, buf, letters);
	len_write = write(STDOUT_FILENO, buf, len_read);

	close(fd);

	free(buf);

	return (len_write);
}
