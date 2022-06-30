#include "3-calc.h"

/**
* main - main function
* @argc: argc
* @argv: argv
* Return: 0
*/

int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*f)(int, int);
	int r;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	f = get_op_func(argv[2]);
	if (f == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((b == 0 && argv[2][0] == '/') || (b == 0 && argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	r = f(a, b);
	printf("%d\n", r);
	return (0);
}
