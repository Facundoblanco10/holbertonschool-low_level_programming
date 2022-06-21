#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: argc
* @arv: argv
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 1;
	int result = 0;

	while (argv[i])
	{
		int a = atoi(argv[i]);

		if (argv[i])
		{
			result += a;
			i++;
		}
		else if (argc == 0)
		{
			printf("0\n");
		}
	}
	printf("%d\n", result);
	return (0);
}
