#include "main.h"

/**
* append_text_to_file - creates a file
* @filename: is the name of the file to create
* @text_content: is a NULL terminated string to write to the file
* Return: 1 on success or -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	while (text_content[i])
		i++;
	write(fd, text_content, i);
	close(fd);
	return (1);
}
