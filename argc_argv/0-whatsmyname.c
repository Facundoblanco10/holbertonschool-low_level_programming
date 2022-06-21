#include <stdio.h>

/**
* main - entry point
* @argc: argc
* @argv: argv
* Return: 0
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	if (argc == 2)
	{
		return (1);
	}
	return (0);
}
