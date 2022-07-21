#include "main.h"

/**
* main - program that copies the content of a file to another file.
* @argc: number of arguments
* @argv: list of arguments
* Return: 0 on success, -1 on failure
*/

int main(int argc, char **argv)
{
	int input, output, char_save;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	input = open(argv[1], O_RDONLY);
	output = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	char_save = read(input, buf, 1024);
	while (char_save)
	{
		if (write(output, buf, char_save))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		char_save = read(input, buf, 1024);
		if (char_save == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	}
	if (close(output) == -1 || close(input) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", -1);
		exit(100);
	}
	return (0);
