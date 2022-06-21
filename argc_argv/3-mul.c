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
	int a = atoi(argv[1]);
	int e = atoi(argv[2]);

	if (argc == 3)
	{
		printf("%d\n", (e * a));
	}
	else
	{
		printf("Error");
	}
	return (0);
}
