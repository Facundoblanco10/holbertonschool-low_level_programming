#include <stdio.h>

/**
* main - entry point
* @argc: unused
* @argv: arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	(void) argc;
	while (argv[i])
	{
	printf("%s\n", argv[i]);
	i++;
	}
	return (0);
}
