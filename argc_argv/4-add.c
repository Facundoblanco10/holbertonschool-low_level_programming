#include <stdio.h>
#include <stdlib.h>

/**
* verificator - verify
* @n: number
* Return: 0 or 1
*/

int verificator(char *n)
{
	int r = 0;

	while (n[r])
	{
		if (n[r] < 48 || n[r] > 57)
		{
			return (0);
		}
		r++;
	}
	return (1);
}
/**
* main - entry point
* @argc: argc
* @argv: argv
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 1;
	int result = 0;

	while (i < argc)
	{
		if (verificator(argv[i]))
		{
			result += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", result);
	return (0);
}
