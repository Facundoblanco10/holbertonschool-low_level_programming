#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: argc
* @argv: argv
* Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int e = atoi(argv[2]);

		printf("%d\n", (e * a));
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
