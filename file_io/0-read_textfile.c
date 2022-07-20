#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: file name
* @letters: letters
* Return: the actual number of letters it could read and print or 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	int i = 0;

	if (!*filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters);
	if (!buf)
		return (0);
	read(fd, buf, letters);
	while (buf[i])
		i++;
	write(STDOUT_FILENO, buf, i);
	close(fd);
	return (i);
}
